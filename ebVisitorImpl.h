#ifndef __eb_VISITOR_IMPL__
#define __eb_VISITOR_IMPL__

#include "ebBaseVisitor.h"
#include "ebParser.h"

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"

#include <algorithm>
#include <any>
#include <iostream>
#include <llvm/ADT/StringRef.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/Type.h>
#include <llvm/Support/raw_ostream.h>
#include <map>
#include <memory>
#include <string>
#include <system_error>

/* added the Impl at the end of the class to avoid it being .gitignored sorry */
class ebVisitorImpl : ebBaseVisitor {
public:
  ebVisitorImpl()
      : context(std::make_unique<llvm::LLVMContext>()),
        module(std::make_unique<llvm::Module>("LaPC2", *context)),
        builder(std::make_unique<llvm::IRBuilder<>>(*context)) {}

  virtual std::any visitProg(ebParser::ProgContext *ctx) override;
  virtual std::any visitPrintExpr(ebParser::PrintExprContext *ctx) override;
  virtual std::any visitAssign(ebParser::AssignContext *ctx) override;
  virtual std::any visitStatdef(ebParser::StatdefContext *ctx) override;
  virtual std::any visitStatextern(ebParser::StatexternContext *ctx) override;
  virtual std::any visitBlank(ebParser::BlankContext *ctx) override;
  virtual std::any visitCall(ebParser::CallContext *ctx) override;
  virtual std::any visitNumber(ebParser::NumberContext *ctx) override;
  virtual std::any visitMulDiv(ebParser::MulDivContext *ctx) override;
  virtual std::any visitAdd(ebParser::AddContext *ctx) override;
  virtual std::any visitSub(ebParser::SubContext *ctx) override;
  virtual std::any visitParens(ebParser::ParensContext *ctx) override;
  virtual std::any visitId(ebParser::IdContext *ctx) override;
  virtual std::any visitProto(ebParser::ProtoContext *ctx) override;
  virtual std::any visitDef(ebParser::DefContext *ctx) override;
  virtual std::any visitExtern(ebParser::ExternContext *ctx) override;
  virtual std::any visitIfStatement(ebParser::IfStatementContext *ctx) override;
  virtual std::any
  visitElseStatement(ebParser::ElseStatementContext *ctx) override;
  void test() {
    std::error_code error;
    llvm::raw_fd_stream outLL("test.ll", error);
    module->print(outLL, nullptr);
  }

private:
  std::map<std::string, std::any> memory;
  std::unique_ptr<llvm::LLVMContext> context;
  std::unique_ptr<llvm::Module> module;
  std::unique_ptr<llvm::IRBuilder<>> builder;

  // aux
  llvm::Function *F;

  // aux methods
  llvm::AllocaInst *CreateEntryBlockAlloca(llvm::StringRef varName) {
    llvm::IRBuilder<> TmpB(&F->getEntryBlock(), F->getEntryBlock().begin());
    return TmpB.CreateAlloca(llvm::Type::getDoubleTy(*context), nullptr,
                             varName);
  }
};

#endif

// vim: set ts=2:sw=2:et:sts=2:
