
// Generated from eb.g4 by ANTLR 4.13.1


#include "ebLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct EbLexerStaticData final {
  EbLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  EbLexerStaticData(const EbLexerStaticData&) = delete;
  EbLexerStaticData(EbLexerStaticData&&) = delete;
  EbLexerStaticData& operator=(const EbLexerStaticData&) = delete;
  EbLexerStaticData& operator=(EbLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag eblexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
EbLexerStaticData *eblexerLexerStaticData = nullptr;

void eblexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (eblexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(eblexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<EbLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "MUL", "DIV", "ADD", 
      "SUB", "DEF", "EXTERN", "IF", "THEN", "ELSE", "ENDIF", "ID", "NUMBER", 
      "NEWLINE", "COMMENT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,21,143,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,
  	1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,
  	6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,
  	1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,16,4,16,100,8,16,11,16,12,16,101,
  	1,17,3,17,105,8,17,1,17,5,17,108,8,17,10,17,12,17,111,9,17,1,17,3,17,
  	114,8,17,1,17,4,17,117,8,17,11,17,12,17,118,1,18,3,18,122,8,18,1,18,1,
  	18,1,19,1,19,5,19,128,8,19,10,19,12,19,131,9,19,1,19,1,19,1,19,1,19,1,
  	20,4,20,138,8,20,11,20,12,20,139,1,20,1,20,1,129,0,21,1,1,3,2,5,3,7,4,
  	9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,
  	17,35,18,37,19,39,20,41,21,1,0,5,2,0,65,90,97,122,2,0,43,43,45,45,1,0,
  	48,57,1,0,46,46,2,0,9,9,32,32,150,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,
  	0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,
  	0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,
  	0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,
  	39,1,0,0,0,0,41,1,0,0,0,1,43,1,0,0,0,3,45,1,0,0,0,5,47,1,0,0,0,7,49,1,
  	0,0,0,9,51,1,0,0,0,11,53,1,0,0,0,13,60,1,0,0,0,15,62,1,0,0,0,17,64,1,
  	0,0,0,19,66,1,0,0,0,21,68,1,0,0,0,23,72,1,0,0,0,25,79,1,0,0,0,27,82,1,
  	0,0,0,29,87,1,0,0,0,31,92,1,0,0,0,33,99,1,0,0,0,35,104,1,0,0,0,37,121,
  	1,0,0,0,39,125,1,0,0,0,41,137,1,0,0,0,43,44,5,61,0,0,44,2,1,0,0,0,45,
  	46,5,40,0,0,46,4,1,0,0,0,47,48,5,41,0,0,48,6,1,0,0,0,49,50,5,60,0,0,50,
  	8,1,0,0,0,51,52,5,62,0,0,52,10,1,0,0,0,53,54,5,114,0,0,54,55,5,101,0,
  	0,55,56,5,116,0,0,56,57,5,117,0,0,57,58,5,114,0,0,58,59,5,110,0,0,59,
  	12,1,0,0,0,60,61,5,42,0,0,61,14,1,0,0,0,62,63,5,47,0,0,63,16,1,0,0,0,
  	64,65,5,43,0,0,65,18,1,0,0,0,66,67,5,45,0,0,67,20,1,0,0,0,68,69,5,100,
  	0,0,69,70,5,101,0,0,70,71,5,102,0,0,71,22,1,0,0,0,72,73,5,101,0,0,73,
  	74,5,120,0,0,74,75,5,116,0,0,75,76,5,101,0,0,76,77,5,114,0,0,77,78,5,
  	110,0,0,78,24,1,0,0,0,79,80,5,105,0,0,80,81,5,102,0,0,81,26,1,0,0,0,82,
  	83,5,116,0,0,83,84,5,104,0,0,84,85,5,101,0,0,85,86,5,110,0,0,86,28,1,
  	0,0,0,87,88,5,101,0,0,88,89,5,108,0,0,89,90,5,115,0,0,90,91,5,101,0,0,
  	91,30,1,0,0,0,92,93,5,101,0,0,93,94,5,110,0,0,94,95,5,100,0,0,95,96,5,
  	105,0,0,96,97,5,102,0,0,97,32,1,0,0,0,98,100,7,0,0,0,99,98,1,0,0,0,100,
  	101,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,34,1,0,0,0,103,105,7,1,
  	0,0,104,103,1,0,0,0,104,105,1,0,0,0,105,113,1,0,0,0,106,108,7,2,0,0,107,
  	106,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,112,1,
  	0,0,0,111,109,1,0,0,0,112,114,7,3,0,0,113,109,1,0,0,0,113,114,1,0,0,0,
  	114,116,1,0,0,0,115,117,7,2,0,0,116,115,1,0,0,0,117,118,1,0,0,0,118,116,
  	1,0,0,0,118,119,1,0,0,0,119,36,1,0,0,0,120,122,5,13,0,0,121,120,1,0,0,
  	0,121,122,1,0,0,0,122,123,1,0,0,0,123,124,5,10,0,0,124,38,1,0,0,0,125,
  	129,5,35,0,0,126,128,9,0,0,0,127,126,1,0,0,0,128,131,1,0,0,0,129,130,
  	1,0,0,0,129,127,1,0,0,0,130,132,1,0,0,0,131,129,1,0,0,0,132,133,3,37,
  	18,0,133,134,1,0,0,0,134,135,6,19,0,0,135,40,1,0,0,0,136,138,7,4,0,0,
  	137,136,1,0,0,0,138,139,1,0,0,0,139,137,1,0,0,0,139,140,1,0,0,0,140,141,
  	1,0,0,0,141,142,6,20,0,0,142,42,1,0,0,0,9,0,101,104,109,113,118,121,129,
  	139,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  eblexerLexerStaticData = staticData.release();
}

}

ebLexer::ebLexer(CharStream *input) : Lexer(input) {
  ebLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *eblexerLexerStaticData->atn, eblexerLexerStaticData->decisionToDFA, eblexerLexerStaticData->sharedContextCache);
}

ebLexer::~ebLexer() {
  delete _interpreter;
}

std::string ebLexer::getGrammarFileName() const {
  return "eb.g4";
}

const std::vector<std::string>& ebLexer::getRuleNames() const {
  return eblexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ebLexer::getChannelNames() const {
  return eblexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ebLexer::getModeNames() const {
  return eblexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ebLexer::getVocabulary() const {
  return eblexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ebLexer::getSerializedATN() const {
  return eblexerLexerStaticData->serializedATN;
}

const atn::ATN& ebLexer::getATN() const {
  return *eblexerLexerStaticData->atn;
}




void ebLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  eblexerLexerInitialize();
#else
  ::antlr4::internal::call_once(eblexerLexerOnceFlag, eblexerLexerInitialize);
#endif
}
