
// Generated from eb.g4 by ANTLR 4.13.1


#include "ebVisitor.h"

#include "ebParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct EbParserStaticData final {
  EbParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  EbParserStaticData(const EbParserStaticData&) = delete;
  EbParserStaticData(EbParserStaticData&&) = delete;
  EbParserStaticData& operator=(const EbParserStaticData&) = delete;
  EbParserStaticData& operator=(EbParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ebParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
EbParserStaticData *ebParserStaticData = nullptr;

void ebParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (ebParserStaticData != nullptr) {
    return;
  }
#else
  assert(ebParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<EbParserStaticData>(
    std::vector<std::string>{
      "prog", "stat", "expr", "tf", "ifStatement", "elseStatement", "prototype", 
      "definition", "external"
    },
    std::vector<std::string>{
      "", "'='", "'('", "')'", "'<'", "'>'", "'return'", "'*'", "'/'", "'+'", 
      "'-'", "'def'", "'extern'", "'if'", "'then'", "'else'", "'endif'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "MUL", "DIV", "ADD", "SUB", "DEF", "EXTERN", 
      "IF", "THEN", "ELSE", "ENDIF", "ID", "NUMBER", "NEWLINE", "COMMENT", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,21,122,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,5,0,20,8,0,10,0,12,0,23,9,0,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,43,8,1,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,61,8,2,10,2,
  	12,2,64,9,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,72,8,2,1,3,1,3,1,3,3,3,77,8,3,
  	1,4,1,4,1,4,1,4,5,4,83,8,4,10,4,12,4,86,9,4,1,4,3,4,89,8,4,1,4,1,4,1,
  	5,1,5,5,5,95,8,5,10,5,12,5,98,9,5,1,6,1,6,1,6,5,6,103,8,6,10,6,12,6,106,
  	9,6,1,6,1,6,1,7,1,7,1,7,4,7,113,8,7,11,7,12,7,114,1,7,1,7,1,8,1,8,1,8,
  	1,8,0,0,9,0,2,4,6,8,10,12,14,16,0,2,1,0,7,8,1,0,4,5,131,0,21,1,0,0,0,
  	2,42,1,0,0,0,4,71,1,0,0,0,6,73,1,0,0,0,8,78,1,0,0,0,10,92,1,0,0,0,12,
  	99,1,0,0,0,14,109,1,0,0,0,16,118,1,0,0,0,18,20,3,2,1,0,19,18,1,0,0,0,
  	20,23,1,0,0,0,21,19,1,0,0,0,21,22,1,0,0,0,22,1,1,0,0,0,23,21,1,0,0,0,
  	24,25,3,4,2,0,25,26,5,19,0,0,26,43,1,0,0,0,27,28,5,17,0,0,28,29,5,1,0,
  	0,29,30,3,4,2,0,30,31,5,19,0,0,31,43,1,0,0,0,32,33,3,14,7,0,33,34,5,19,
  	0,0,34,43,1,0,0,0,35,36,3,16,8,0,36,37,5,19,0,0,37,43,1,0,0,0,38,39,3,
  	8,4,0,39,40,5,19,0,0,40,43,1,0,0,0,41,43,5,19,0,0,42,24,1,0,0,0,42,27,
  	1,0,0,0,42,32,1,0,0,0,42,35,1,0,0,0,42,38,1,0,0,0,42,41,1,0,0,0,43,3,
  	1,0,0,0,44,45,7,0,0,0,45,46,3,4,2,0,46,47,3,4,2,0,47,72,1,0,0,0,48,49,
  	5,10,0,0,49,50,3,4,2,0,50,51,3,4,2,0,51,72,1,0,0,0,52,53,5,9,0,0,53,54,
  	3,4,2,0,54,55,3,4,2,0,55,72,1,0,0,0,56,72,5,18,0,0,57,58,5,17,0,0,58,
  	62,5,2,0,0,59,61,3,4,2,0,60,59,1,0,0,0,61,64,1,0,0,0,62,60,1,0,0,0,62,
  	63,1,0,0,0,63,65,1,0,0,0,64,62,1,0,0,0,65,72,5,3,0,0,66,72,5,17,0,0,67,
  	68,5,2,0,0,68,69,3,4,2,0,69,70,5,3,0,0,70,72,1,0,0,0,71,44,1,0,0,0,71,
  	48,1,0,0,0,71,52,1,0,0,0,71,56,1,0,0,0,71,57,1,0,0,0,71,66,1,0,0,0,71,
  	67,1,0,0,0,72,5,1,0,0,0,73,76,3,4,2,0,74,75,7,1,0,0,75,77,3,4,2,0,76,
  	74,1,0,0,0,76,77,1,0,0,0,77,7,1,0,0,0,78,79,5,13,0,0,79,80,3,6,3,0,80,
  	84,5,14,0,0,81,83,3,2,1,0,82,81,1,0,0,0,83,86,1,0,0,0,84,82,1,0,0,0,84,
  	85,1,0,0,0,85,88,1,0,0,0,86,84,1,0,0,0,87,89,3,10,5,0,88,87,1,0,0,0,88,
  	89,1,0,0,0,89,90,1,0,0,0,90,91,5,16,0,0,91,9,1,0,0,0,92,96,5,15,0,0,93,
  	95,3,2,1,0,94,93,1,0,0,0,95,98,1,0,0,0,96,94,1,0,0,0,96,97,1,0,0,0,97,
  	11,1,0,0,0,98,96,1,0,0,0,99,100,5,17,0,0,100,104,5,2,0,0,101,103,5,17,
  	0,0,102,101,1,0,0,0,103,106,1,0,0,0,104,102,1,0,0,0,104,105,1,0,0,0,105,
  	107,1,0,0,0,106,104,1,0,0,0,107,108,5,3,0,0,108,13,1,0,0,0,109,110,5,
  	11,0,0,110,112,3,12,6,0,111,113,3,2,1,0,112,111,1,0,0,0,113,114,1,0,0,
  	0,114,112,1,0,0,0,114,115,1,0,0,0,115,116,1,0,0,0,116,117,5,6,0,0,117,
  	15,1,0,0,0,118,119,5,12,0,0,119,120,3,12,6,0,120,17,1,0,0,0,10,21,42,
  	62,71,76,84,88,96,104,114
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ebParserStaticData = staticData.release();
}

}

ebParser::ebParser(TokenStream *input) : ebParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ebParser::ebParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ebParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *ebParserStaticData->atn, ebParserStaticData->decisionToDFA, ebParserStaticData->sharedContextCache, options);
}

ebParser::~ebParser() {
  delete _interpreter;
}

const atn::ATN& ebParser::getATN() const {
  return *ebParserStaticData->atn;
}

std::string ebParser::getGrammarFileName() const {
  return "eb.g4";
}

const std::vector<std::string>& ebParser::getRuleNames() const {
  return ebParserStaticData->ruleNames;
}

const dfa::Vocabulary& ebParser::getVocabulary() const {
  return ebParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ebParser::getSerializedATN() const {
  return ebParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

ebParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ebParser::StatContext *> ebParser::ProgContext::stat() {
  return getRuleContexts<ebParser::StatContext>();
}

ebParser::StatContext* ebParser::ProgContext::stat(size_t i) {
  return getRuleContext<ebParser::StatContext>(i);
}


size_t ebParser::ProgContext::getRuleIndex() const {
  return ebParser::RuleProg;
}


std::any ebParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ebParser::ProgContext* ebParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ebParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 933764) != 0)) {
      setState(18);
      stat();
      setState(23);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

ebParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ebParser::StatContext::getRuleIndex() const {
  return ebParser::RuleStat;
}

void ebParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlankContext ------------------------------------------------------------------

tree::TerminalNode* ebParser::BlankContext::NEWLINE() {
  return getToken(ebParser::NEWLINE, 0);
}

ebParser::BlankContext::BlankContext(StatContext *ctx) { copyFrom(ctx); }


std::any ebParser::BlankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitBlank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatdefContext ------------------------------------------------------------------

ebParser::DefinitionContext* ebParser::StatdefContext::definition() {
  return getRuleContext<ebParser::DefinitionContext>(0);
}

tree::TerminalNode* ebParser::StatdefContext::NEWLINE() {
  return getToken(ebParser::NEWLINE, 0);
}

ebParser::StatdefContext::StatdefContext(StatContext *ctx) { copyFrom(ctx); }


std::any ebParser::StatdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitStatdef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatexternContext ------------------------------------------------------------------

ebParser::ExternalContext* ebParser::StatexternContext::external() {
  return getRuleContext<ebParser::ExternalContext>(0);
}

tree::TerminalNode* ebParser::StatexternContext::NEWLINE() {
  return getToken(ebParser::NEWLINE, 0);
}

ebParser::StatexternContext::StatexternContext(StatContext *ctx) { copyFrom(ctx); }


std::any ebParser::StatexternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitStatextern(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatifContext ------------------------------------------------------------------

ebParser::IfStatementContext* ebParser::StatifContext::ifStatement() {
  return getRuleContext<ebParser::IfStatementContext>(0);
}

tree::TerminalNode* ebParser::StatifContext::NEWLINE() {
  return getToken(ebParser::NEWLINE, 0);
}

ebParser::StatifContext::StatifContext(StatContext *ctx) { copyFrom(ctx); }


std::any ebParser::StatifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitStatif(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintExprContext ------------------------------------------------------------------

ebParser::ExprContext* ebParser::PrintExprContext::expr() {
  return getRuleContext<ebParser::ExprContext>(0);
}

tree::TerminalNode* ebParser::PrintExprContext::NEWLINE() {
  return getToken(ebParser::NEWLINE, 0);
}

ebParser::PrintExprContext::PrintExprContext(StatContext *ctx) { copyFrom(ctx); }


std::any ebParser::PrintExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitPrintExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* ebParser::AssignContext::ID() {
  return getToken(ebParser::ID, 0);
}

ebParser::ExprContext* ebParser::AssignContext::expr() {
  return getRuleContext<ebParser::ExprContext>(0);
}

tree::TerminalNode* ebParser::AssignContext::NEWLINE() {
  return getToken(ebParser::NEWLINE, 0);
}

ebParser::AssignContext::AssignContext(StatContext *ctx) { copyFrom(ctx); }


std::any ebParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
ebParser::StatContext* ebParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, ebParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(42);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ebParser::PrintExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(24);
      expr();
      setState(25);
      match(ebParser::NEWLINE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ebParser::AssignContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(27);
      match(ebParser::ID);
      setState(28);
      match(ebParser::T__0);
      setState(29);
      expr();
      setState(30);
      match(ebParser::NEWLINE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ebParser::StatdefContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(32);
      definition();
      setState(33);
      match(ebParser::NEWLINE);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ebParser::StatexternContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(35);
      external();
      setState(36);
      match(ebParser::NEWLINE);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ebParser::StatifContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(38);
      ifStatement();
      setState(39);
      match(ebParser::NEWLINE);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ebParser::BlankContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(41);
      match(ebParser::NEWLINE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ebParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ebParser::ExprContext::getRuleIndex() const {
  return ebParser::RuleExpr;
}

void ebParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddContext ------------------------------------------------------------------

tree::TerminalNode* ebParser::AddContext::ADD() {
  return getToken(ebParser::ADD, 0);
}

std::vector<ebParser::ExprContext *> ebParser::AddContext::expr() {
  return getRuleContexts<ebParser::ExprContext>();
}

ebParser::ExprContext* ebParser::AddContext::expr(size_t i) {
  return getRuleContext<ebParser::ExprContext>(i);
}

ebParser::AddContext::AddContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ebParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubContext ------------------------------------------------------------------

tree::TerminalNode* ebParser::SubContext::SUB() {
  return getToken(ebParser::SUB, 0);
}

std::vector<ebParser::ExprContext *> ebParser::SubContext::expr() {
  return getRuleContexts<ebParser::ExprContext>();
}

ebParser::ExprContext* ebParser::SubContext::expr(size_t i) {
  return getRuleContext<ebParser::ExprContext>(i);
}

ebParser::SubContext::SubContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ebParser::SubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallContext ------------------------------------------------------------------

tree::TerminalNode* ebParser::CallContext::ID() {
  return getToken(ebParser::ID, 0);
}

std::vector<ebParser::ExprContext *> ebParser::CallContext::expr() {
  return getRuleContexts<ebParser::ExprContext>();
}

ebParser::ExprContext* ebParser::CallContext::expr(size_t i) {
  return getRuleContext<ebParser::ExprContext>(i);
}

ebParser::CallContext::CallContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ebParser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberContext ------------------------------------------------------------------

tree::TerminalNode* ebParser::NumberContext::NUMBER() {
  return getToken(ebParser::NUMBER, 0);
}

ebParser::NumberContext::NumberContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ebParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<ebParser::ExprContext *> ebParser::MulDivContext::expr() {
  return getRuleContexts<ebParser::ExprContext>();
}

ebParser::ExprContext* ebParser::MulDivContext::expr(size_t i) {
  return getRuleContext<ebParser::ExprContext>(i);
}

tree::TerminalNode* ebParser::MulDivContext::MUL() {
  return getToken(ebParser::MUL, 0);
}

tree::TerminalNode* ebParser::MulDivContext::DIV() {
  return getToken(ebParser::DIV, 0);
}

ebParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ebParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensContext ------------------------------------------------------------------

ebParser::ExprContext* ebParser::ParensContext::expr() {
  return getRuleContext<ebParser::ExprContext>(0);
}

ebParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ebParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* ebParser::IdContext::ID() {
  return getToken(ebParser::ID, 0);
}

ebParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ebParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
ebParser::ExprContext* ebParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 4, ebParser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(71);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ebParser::MulDivContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(44);
      _la = _input->LA(1);
      if (!(_la == ebParser::MUL

      || _la == ebParser::DIV)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(45);
      expr();
      setState(46);
      expr();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ebParser::SubContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(48);
      match(ebParser::SUB);
      setState(49);
      expr();
      setState(50);
      expr();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ebParser::AddContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(52);
      match(ebParser::ADD);
      setState(53);
      expr();
      setState(54);
      expr();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ebParser::NumberContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(56);
      match(ebParser::NUMBER);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ebParser::CallContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(57);
      match(ebParser::ID);
      setState(58);
      match(ebParser::T__1);
      setState(62);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 395140) != 0)) {
        setState(59);
        expr();
        setState(64);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(65);
      match(ebParser::T__2);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ebParser::IdContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(66);
      match(ebParser::ID);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ebParser::ParensContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(67);
      match(ebParser::T__1);
      setState(68);
      expr();
      setState(69);
      match(ebParser::T__2);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TfContext ------------------------------------------------------------------

ebParser::TfContext::TfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ebParser::TfContext::getRuleIndex() const {
  return ebParser::RuleTf;
}

void ebParser::TfContext::copyFrom(TfContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConditionalExprContext ------------------------------------------------------------------

std::vector<ebParser::ExprContext *> ebParser::ConditionalExprContext::expr() {
  return getRuleContexts<ebParser::ExprContext>();
}

ebParser::ExprContext* ebParser::ConditionalExprContext::expr(size_t i) {
  return getRuleContext<ebParser::ExprContext>(i);
}

ebParser::ConditionalExprContext::ConditionalExprContext(TfContext *ctx) { copyFrom(ctx); }


std::any ebParser::ConditionalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitConditionalExpr(this);
  else
    return visitor->visitChildren(this);
}
ebParser::TfContext* ebParser::tf() {
  TfContext *_localctx = _tracker.createInstance<TfContext>(_ctx, getState());
  enterRule(_localctx, 6, ebParser::RuleTf);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<ebParser::ConditionalExprContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(73);
    expr();
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ebParser::T__3

    || _la == ebParser::T__4) {
      setState(74);
      _la = _input->LA(1);
      if (!(_la == ebParser::T__3

      || _la == ebParser::T__4)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(75);
      expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

ebParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ebParser::IfStatementContext::IF() {
  return getToken(ebParser::IF, 0);
}

ebParser::TfContext* ebParser::IfStatementContext::tf() {
  return getRuleContext<ebParser::TfContext>(0);
}

tree::TerminalNode* ebParser::IfStatementContext::THEN() {
  return getToken(ebParser::THEN, 0);
}

tree::TerminalNode* ebParser::IfStatementContext::ENDIF() {
  return getToken(ebParser::ENDIF, 0);
}

std::vector<ebParser::StatContext *> ebParser::IfStatementContext::stat() {
  return getRuleContexts<ebParser::StatContext>();
}

ebParser::StatContext* ebParser::IfStatementContext::stat(size_t i) {
  return getRuleContext<ebParser::StatContext>(i);
}

ebParser::ElseStatementContext* ebParser::IfStatementContext::elseStatement() {
  return getRuleContext<ebParser::ElseStatementContext>(0);
}


size_t ebParser::IfStatementContext::getRuleIndex() const {
  return ebParser::RuleIfStatement;
}


std::any ebParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

ebParser::IfStatementContext* ebParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, ebParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(ebParser::IF);
    setState(79);
    tf();
    setState(80);
    match(ebParser::THEN);
    setState(84);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 933764) != 0)) {
      setState(81);
      stat();
      setState(86);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(88);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ebParser::ELSE) {
      setState(87);
      elseStatement();
    }
    setState(90);
    match(ebParser::ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

ebParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ebParser::ElseStatementContext::ELSE() {
  return getToken(ebParser::ELSE, 0);
}

std::vector<ebParser::StatContext *> ebParser::ElseStatementContext::stat() {
  return getRuleContexts<ebParser::StatContext>();
}

ebParser::StatContext* ebParser::ElseStatementContext::stat(size_t i) {
  return getRuleContext<ebParser::StatContext>(i);
}


size_t ebParser::ElseStatementContext::getRuleIndex() const {
  return ebParser::RuleElseStatement;
}


std::any ebParser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

ebParser::ElseStatementContext* ebParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, ebParser::RuleElseStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(ebParser::ELSE);
    setState(96);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 933764) != 0)) {
      setState(93);
      stat();
      setState(98);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrototypeContext ------------------------------------------------------------------

ebParser::PrototypeContext::PrototypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ebParser::PrototypeContext::getRuleIndex() const {
  return ebParser::RulePrototype;
}

void ebParser::PrototypeContext::copyFrom(PrototypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProtoContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> ebParser::ProtoContext::ID() {
  return getTokens(ebParser::ID);
}

tree::TerminalNode* ebParser::ProtoContext::ID(size_t i) {
  return getToken(ebParser::ID, i);
}

ebParser::ProtoContext::ProtoContext(PrototypeContext *ctx) { copyFrom(ctx); }


std::any ebParser::ProtoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitProto(this);
  else
    return visitor->visitChildren(this);
}
ebParser::PrototypeContext* ebParser::prototype() {
  PrototypeContext *_localctx = _tracker.createInstance<PrototypeContext>(_ctx, getState());
  enterRule(_localctx, 12, ebParser::RulePrototype);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<ebParser::ProtoContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(ebParser::ID);
    setState(100);
    match(ebParser::T__1);
    setState(104);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ebParser::ID) {
      setState(101);
      match(ebParser::ID);
      setState(106);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(107);
    match(ebParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

ebParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ebParser::DefinitionContext::getRuleIndex() const {
  return ebParser::RuleDefinition;
}

void ebParser::DefinitionContext::copyFrom(DefinitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefContext ------------------------------------------------------------------

tree::TerminalNode* ebParser::DefContext::DEF() {
  return getToken(ebParser::DEF, 0);
}

ebParser::PrototypeContext* ebParser::DefContext::prototype() {
  return getRuleContext<ebParser::PrototypeContext>(0);
}

std::vector<ebParser::StatContext *> ebParser::DefContext::stat() {
  return getRuleContexts<ebParser::StatContext>();
}

ebParser::StatContext* ebParser::DefContext::stat(size_t i) {
  return getRuleContext<ebParser::StatContext>(i);
}

ebParser::DefContext::DefContext(DefinitionContext *ctx) { copyFrom(ctx); }


std::any ebParser::DefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitDef(this);
  else
    return visitor->visitChildren(this);
}
ebParser::DefinitionContext* ebParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 14, ebParser::RuleDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<ebParser::DefContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(ebParser::DEF);
    setState(110);
    prototype();
    setState(112); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(111);
      stat();
      setState(114); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 933764) != 0));
    setState(116);
    match(ebParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExternalContext ------------------------------------------------------------------

ebParser::ExternalContext::ExternalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ebParser::ExternalContext::getRuleIndex() const {
  return ebParser::RuleExternal;
}

void ebParser::ExternalContext::copyFrom(ExternalContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExternContext ------------------------------------------------------------------

tree::TerminalNode* ebParser::ExternContext::EXTERN() {
  return getToken(ebParser::EXTERN, 0);
}

ebParser::PrototypeContext* ebParser::ExternContext::prototype() {
  return getRuleContext<ebParser::PrototypeContext>(0);
}

ebParser::ExternContext::ExternContext(ExternalContext *ctx) { copyFrom(ctx); }


std::any ebParser::ExternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ebVisitor*>(visitor))
    return parserVisitor->visitExtern(this);
  else
    return visitor->visitChildren(this);
}
ebParser::ExternalContext* ebParser::external() {
  ExternalContext *_localctx = _tracker.createInstance<ExternalContext>(_ctx, getState());
  enterRule(_localctx, 16, ebParser::RuleExternal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<ebParser::ExternContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(ebParser::EXTERN);
    setState(119);
    prototype();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ebParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  ebParserInitialize();
#else
  ::antlr4::internal::call_once(ebParserOnceFlag, ebParserInitialize);
#endif
}
