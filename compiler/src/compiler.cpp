// compiler.cpp
# include <iostream>
# include <kairo/lexer.hpp>

int main() {

  std::string path;

  std::cout << "Enter File Location:";
  std::cin >> path;

  
  lexer::tokenize(path);


  return 0;
}
