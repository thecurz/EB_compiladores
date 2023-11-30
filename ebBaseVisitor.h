
// Generated from eb.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ebVisitor.h"


/**
 * This class provides an empty implementation of ebVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ebBaseVisitor : public ebVisitor {
public:

  virtual std::any visitProg(ebParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintExpr(ebParser::PrintExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(ebParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatdef(ebParser::StatdefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatextern(ebParser::StatexternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatif(ebParser::StatifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlank(ebParser::BlankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDiv(ebParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSub(ebParser::SubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd(ebParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(ebParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall(ebParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId(ebParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(ebParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalExpr(ebParser::ConditionalExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(ebParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseStatement(ebParser::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProto(ebParser::ProtoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDef(ebParser::DefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtern(ebParser::ExternContext *ctx) override {
    return visitChildren(ctx);
  }


};

