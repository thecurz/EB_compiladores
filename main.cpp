#include <cstdio>
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

#include "antlr4-runtime.h"
#include "ebLexer.h"
#include "ebParser.h"
#include "ebVisitorImpl.h"

int main(int argc, char **argv) {
  if (argc <= 1)
    return -1;
  std::ifstream is;
  is.open(argv[1]);
  antlr4::ANTLRInputStream input(is);
  ebLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  ebParser parser(&tokens);
  auto tree = parser.prog();
  ebVisitorImpl eval;
  eval.visitProg(tree);
  eval.test();
  // std::cout << tree->toStringTree(true) << std::endl;
}
