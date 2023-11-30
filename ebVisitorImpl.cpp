#include "ebVisitorImpl.h"
#include "ebParser.h"
#include <any>
#include <llvm/ADT/APFloat.h>
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Value.h>
#include <memory>
#include <string>

std::any ebVisitorImpl::visitProg(ebParser::ProgContext *ctx) {
  std::cout << "visitProg\n";
  return visitChildren(ctx);
}

std::any ebVisitorImpl::visitPrintExpr(ebParser::PrintExprContext *ctx) {
  std::cout << "visitPrintExpr\n";
  std::vector<double> Args;
  std::vector<llvm::Type *> Doubles(Args.size(),
                                    llvm::Type::getDoubleTy(*context));
  llvm::FunctionType *FT = llvm::FunctionType::get(
      llvm::Type::getDoubleTy(*context), Doubles, false);

  F = llvm::Function::Create(FT, llvm::Function::ExternalLinkage, "_anon_",
                             module.get());

  llvm::BasicBlock *BB = llvm::BasicBlock::Create(*context, "entry", F);
  builder->SetInsertPoint(BB);
  llvm::Value *val = std::any_cast<llvm::Value *>(visit(ctx->expr()));
  builder->CreateRet(val);

  return std::any();
  // return visitChildren(ctx);
}

std::any ebVisitorImpl::visitAssign(ebParser::AssignContext *ctx) {
  std::cout << "visitAssign\n";
  return visitChildren(ctx);
}

std::any ebVisitorImpl::visitStatdef(ebParser::StatdefContext *ctx) {
  std::cout << "visitStatdef\n";
  return visitChildren(ctx);
}

std::any ebVisitorImpl::visitStatextern(ebParser::StatexternContext *ctx) {
  std::cout << "visitStatextern\n";
  return visitChildren(ctx);
}

std::any ebVisitorImpl::visitBlank(ebParser::BlankContext *ctx) {
  std::cout << "visitBlank\n";
  return visitChildren(ctx);
}

std::any ebVisitorImpl::visitCall(ebParser::CallContext *ctx) {
  std::cout << "visitCall\n";
  return visitChildren(ctx);
}

std::any ebVisitorImpl::visitNumber(ebParser::NumberContext *ctx) {
  std::cout << "visitNumber\n";
  auto numVal = std::stod(ctx->NUMBER()->getText());
  llvm::Value *val = llvm::ConstantFP::get(*context, llvm::APFloat(numVal));
  return std::any(val);
  // return visitChildren(ctx);
}

std::any ebVisitorImpl::visitMulDiv(ebParser::MulDivContext *ctx) {
  std::cout << "visitMulDiv\n";
  return visitChildren(ctx);
}

std::any ebVisitorImpl::visitAdd(ebParser::AddContext *ctx) {
  std::cout << "visitAdd\n";
  llvm::Value *L = std::any_cast<llvm::Value *>(visit(ctx->expr(0)));
  llvm::Value *R = std::any_cast<llvm::Value *>(visit(ctx->expr(1)));
  llvm::Value *result;
  result = builder->CreateFAdd(L, R, "addTemp");
  double resultValue =
      llvm::cast<llvm::ConstantFP>(result)->getValueAPF().convertToDouble();
  llvm::outs() << resultValue << "\n";

  result->print(llvm::outs(), false);
  return std::any(result);
  // return visitChildren(ctx);
}
std::any ebVisitorImpl::visitSub(ebParser::SubContext *ctx) {
  std::cout << "visitSub\n";
  llvm::Value *L = std::any_cast<llvm::Value *>(visit(ctx->expr(0)));
  llvm::Value *R = std::any_cast<llvm::Value *>(visit(ctx->expr(1)));
  llvm::Value *result;
  result = builder->CreateFSub(L, R, "subTemp");
  double resultValue =
      llvm::cast<llvm::ConstantFP>(result)->getValueAPF().convertToDouble();
  llvm::outs() << resultValue << "\n";

  result->print(llvm::outs(), false);
  return std::any(result);
  // return visitChildren(ctx);
}

std::any ebVisitorImpl::visitParens(ebParser::ParensContext *ctx) {
  std::cout << "visitParens\n";
  return visitChildren(ctx);
}

std::any ebVisitorImpl::visitId(ebParser::IdContext *ctx) {
  std::cout << "visitId\n";
  std::string idName = ctx->ID()->getText();
  llvm::AllocaInst *Alloca = CreateEntryBlockAlloca(idName);
  memory[idName] = Alloca;
  std::cout << "error??\n";
  // return std::any(Alloca);
  return std::any();
}

std::any ebVisitorImpl::visitIfStatement(ebParser::IfStatementContext *ctx) {
  std::cout << "visitIfStatement\n";

  llvm::Value *condition = std::any_cast<llvm::Value *>(visit(ctx->tf()));

  llvm::Function *function = builder->GetInsertBlock()->getParent();
  llvm::BasicBlock *thenBB =
      llvm::BasicBlock::Create(*context, "then", function);
  llvm::BasicBlock *elseBB = llvm::BasicBlock::Create(*context, "else");
  llvm::BasicBlock *mergeBB = llvm::BasicBlock::Create(*context, "merge");

  builder->CreateCondBr(condition, thenBB, elseBB);

  builder->SetInsertPoint(thenBB);
  for (auto stat : ctx->stat()) {
    visit(stat);
  }
  builder->CreateBr(mergeBB);

  function->getBasicBlockList().push_back(elseBB);
  builder->SetInsertPoint(elseBB);
  if (ctx->elseStatement() != nullptr) {
    for (auto stat : ctx->elseStatement()->stat()) {
      visit(stat);
    }
  }
  builder->CreateBr(mergeBB);

  function->getBasicBlockList().push_back(mergeBB);
  builder->SetInsertPoint(mergeBB);

  return std::any();
  return visitChildren(ctx);
}
std::any
ebVisitorImpl::visitElseStatement(ebParser::ElseStatementContext *ctx) {
  std::cout << "visitElseStatement\n";
  for (auto stat : ctx->stat()) {
    visit(stat);
  }
  return visitChildren(ctx);
}
std::any ebVisitorImpl::visitProto(ebParser::ProtoContext *ctx) {
  std::cout << "visitProto\n";
  return visitChildren(ctx);
}

std::any ebVisitorImpl::visitDef(ebParser::DefContext *ctx) {
  std::cout << "visitDef\n";
  std::cout << "visitDef\n";

  std::string functionName = ctx->prototype()->getText();

  llvm::Type *paramType = llvm::Type::getDoubleTy(*context);
  std::vector<llvm::Type *> paramTypes = {paramType};

  llvm::FunctionType *FT = llvm::FunctionType::get(
      llvm::Type::getDoubleTy(*context), paramTypes, false);

  llvm::Function *F = llvm::Function::Create(
      FT, llvm::Function::ExternalLinkage, functionName, module.get());

  llvm::BasicBlock *BB = llvm::BasicBlock::Create(*context, "entry", F);
  builder->SetInsertPoint(BB);

  builder->SetInsertPoint(BB);

  for (auto stat : ctx->stat()) {
    visit(stat);
  }

  return std::any(F);
  return visitChildren(ctx);
}

std::any ebVisitorImpl::visitExtern(ebParser::ExternContext *ctx) {
  std::cout << "visitExtern\n";
  return visitChildren(ctx);
}

// vim: set ts=2:sw=2:et:sts=2:
