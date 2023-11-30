
// Generated from eb.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  ebLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, MUL = 7, 
    DIV = 8, ADD = 9, SUB = 10, DEF = 11, EXTERN = 12, IF = 13, THEN = 14, 
    ELSE = 15, ENDIF = 16, ID = 17, NUMBER = 18, NEWLINE = 19, COMMENT = 20, 
    WS = 21
  };

  explicit ebLexer(antlr4::CharStream *input);

  ~ebLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

