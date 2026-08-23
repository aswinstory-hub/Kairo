# Structure

`The structure of the compiler`

---

```
 Source Code
      |
      |
    Lexer
      |
      |
    Tokens
      |
      |
    Parser
      |
      |
Semantic Analysis
      |
      |
   C++ Code
      |
      |
C++ Compiler
      |
      |
    .exe

```

---

## Lexer 

`> Reads the plain source code and returns a group of Tokens`

## Token 

`> A Token is a type of representation`

A Token generally contains 
```
Token
├── type
├── value
├── line
├── column
└── source location
```

## Token Types

These are recogonized by the lexer and the correspoding token is returned

### Keywords

| Lexeme | Token |
| :---| :---|
| let | LET |
| print | PRINT |
| func | FUNCTION |
| if | IF |
| else | ELSE |
| while | WHILE |
| return | RETURN |
| class | CLASS |
| struct | STRUCTURE |
| import | IMPORT |

### Literals (Types)

| Lexeme | Token |
| :--- | :--- |
| 123 | INTEGER |
| 3.14 | FLOAT |
| "kairo" | STRING |
| 'k' | CHARACTER |
| true/false | BOOLEAN |

### Operators

| Lexeme | Token |
| :--- | :--- |
| + | PLUS |
| - | MINUS |
| * | STAR |
| / | SLASH |
| % | PERCENT |
| == | EQUAL_EQUAL |
| != | NOT_EQUAL |
| < | LESS |
| > | GREATER |
| <= | LESS_EQUAL |
| >= | GREATER_EQUAL |
| && | AND_AND |
| || | OR_OR |
| ! | BANG |
| = | EQUAL |

### PUNCTUATIONS

| Lexeme | Token |
| :--- | :--- |
| ( | OPEN_PAREN |
| ) | CLOSE_PAREN |
| { | OPEN_BRACE |
| } | CLOSE_BRACE |
| [ | OPEN_BLOCK |
| ] | CLOSE_BLOCK |
| , | COMMA |
| . | FULLSTOP |
| : | COLON |
| ; | SEMICOLON |

### Comments 

| Lexeme | Token |
| :--- | :--- |
| // | ONELINE_COMMENT |
| /* | OPEN_COMMENT |
| */ | CLOSE_COMMENT |  

---

## Parser 


































