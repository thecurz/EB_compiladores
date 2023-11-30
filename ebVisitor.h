
// Generated from eb.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ebParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ebParser.
 */
class  ebVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ebParser.
   */
    virtual std::any visitProg(ebParser::ProgContext *context) = 0;

    virtual std::any visitPrintExpr(ebParser::PrintExprContext *context) = 0;

    virtual std::any visitAssign(ebParser::AssignContext *context) = 0;

    virtual std::any visitStatdef(ebParser::StatdefContext *context) = 0;

    virtual std::any visitStatextern(ebParser::StatexternContext *context) = 0;

    virtual std::any visitStatif(ebParser::StatifContext *context) = 0;

    virtual std::any visitBlank(ebParser::BlankContext *context) = 0;

    virtual std::any visitMulDiv(ebParser::MulDivContext *context) = 0;

    virtual std::any visitSub(ebParser::SubContext *context) = 0;

    virtual std::any visitAdd(ebParser::AddContext *context) = 0;

    virtual std::any visitNumber(ebParser::NumberContext *context) = 0;

    virtual std::any visitCall(ebParser::CallContext *context) = 0;

    virtual std::any visitId(ebParser::IdContext *context) = 0;

    virtual std::any visitParens(ebParser::ParensContext *context) = 0;

    virtual std::any visitConditionalExpr(ebParser::ConditionalExprContext *context) = 0;

    virtual std::any visitIfStatement(ebParser::IfStatementContext *context) = 0;

    virtual std::any visitElseStatement(ebParser::ElseStatementContext *context) = 0;

    virtual std::any visitProto(ebParser::ProtoContext *context) = 0;

    virtual std::any visitDef(ebParser::DefContext *context) = 0;

    virtual std::any visitExtern(ebParser::ExternContext *context) = 0;


};

