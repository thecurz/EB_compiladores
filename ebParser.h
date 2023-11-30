
// Generated from eb.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  ebParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, MUL = 7, 
    DIV = 8, ADD = 9, SUB = 10, DEF = 11, EXTERN = 12, IF = 13, THEN = 14, 
    ELSE = 15, ENDIF = 16, ID = 17, NUMBER = 18, NEWLINE = 19, COMMENT = 20, 
    WS = 21
  };

  enum {
    RuleProg = 0, RuleStat = 1, RuleExpr = 2, RuleTf = 3, RuleIfStatement = 4, 
    RuleElseStatement = 5, RulePrototype = 6, RuleDefinition = 7, RuleExternal = 8
  };

  explicit ebParser(antlr4::TokenStream *input);

  ebParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ebParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class StatContext;
  class ExprContext;
  class TfContext;
  class IfStatementContext;
  class ElseStatementContext;
  class PrototypeContext;
  class DefinitionContext;
  class ExternalContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatContext() = default;
    void copyFrom(StatContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BlankContext : public StatContext {
  public:
    BlankContext(StatContext *ctx);

    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatdefContext : public StatContext {
  public:
    StatdefContext(StatContext *ctx);

    DefinitionContext *definition();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatexternContext : public StatContext {
  public:
    StatexternContext(StatContext *ctx);

    ExternalContext *external();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatifContext : public StatContext {
  public:
    StatifContext(StatContext *ctx);

    IfStatementContext *ifStatement();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrintExprContext : public StatContext {
  public:
    PrintExprContext(StatContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignContext : public StatContext {
  public:
    AssignContext(StatContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatContext* stat();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AddContext : public ExprContext {
  public:
    AddContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubContext : public ExprContext {
  public:
    SubContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *SUB();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CallContext : public ExprContext {
  public:
    CallContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberContext : public ExprContext {
  public:
    NumberContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NUMBER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivContext : public ExprContext {
  public:
    MulDivContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParensContext : public ExprContext {
  public:
    ParensContext(ExprContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdContext : public ExprContext {
  public:
    IdContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();

  class  TfContext : public antlr4::ParserRuleContext {
  public:
    TfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TfContext() = default;
    void copyFrom(TfContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConditionalExprContext : public TfContext {
  public:
    ConditionalExprContext(TfContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TfContext* tf();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    TfContext *tf();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *ENDIF();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);
    ElseStatementContext *elseStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  ElseStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseStatementContext* elseStatement();

  class  PrototypeContext : public antlr4::ParserRuleContext {
  public:
    PrototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrototypeContext() = default;
    void copyFrom(PrototypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ProtoContext : public PrototypeContext {
  public:
    ProtoContext(PrototypeContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PrototypeContext* prototype();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DefinitionContext() = default;
    void copyFrom(DefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefContext : public DefinitionContext {
  public:
    DefContext(DefinitionContext *ctx);

    antlr4::tree::TerminalNode *DEF();
    PrototypeContext *prototype();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DefinitionContext* definition();

  class  ExternalContext : public antlr4::ParserRuleContext {
  public:
    ExternalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExternalContext() = default;
    void copyFrom(ExternalContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExternContext : public ExternalContext {
  public:
    ExternContext(ExternalContext *ctx);

    antlr4::tree::TerminalNode *EXTERN();
    PrototypeContext *prototype();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExternalContext* external();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

