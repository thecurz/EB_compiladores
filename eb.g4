grammar eb;

/* Syntax analyzer */

prog: stat* ;

stat
    : expr NEWLINE             # printExpr
    | ID '=' expr NEWLINE      # assign
    | definition NEWLINE       # statdef
    | external NEWLINE         # statextern
    | ifStatement NEWLINE      # statif
    | NEWLINE                  # blank
    ;

expr
    : (MUL | DIV) expr expr    # MulDiv
    | SUB expr expr            # Sub
    | ADD expr expr            # Add
    | NUMBER                   # Number
    | ID '(' expr* ')'         # Call
    | ID                       # Id
    | '(' expr ')'             # Parens
    ;
tf
    : expr (('<' | '>') expr)?  # ConditionalExpr
    ;
ifStatement
    : 'if' tf 'then' stat* elseStatement? 'endif' 
    ;

elseStatement
    : 'else' stat*
    ;

prototype
    : ID '(' ID* ')'           # Proto
    ;

definition
    : DEF prototype stat+ 'return' # Def
    ;

external
    : EXTERN prototype         # Extern
    ;

/* Lexical analyzer */

MUL     : '*' ;
DIV     : '/' ;
ADD     : '+' ;
SUB     : '-' ;

DEF     : 'def' ;
EXTERN  : 'extern' ;
IF     : 'if' ;
THEN   : 'then' ;
ELSE   : 'else' ;
ENDIF  : 'endif' ;

ID     : [a-zA-Z]+ ;
NUMBER : [+-]?([0-9]*[.])?[0-9]+ ;
NEWLINE: '\r'? '\n' ;
COMMENT: '#' .*? NEWLINE -> skip ;
WS     : [ \t]+ -> skip ;

