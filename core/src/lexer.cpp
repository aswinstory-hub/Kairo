// lexer.cpp
#include <fstream>
#include <iostream>
#include <kairo/lexer.hpp>
#include <string>

namespace lexer {

  void log(std::string& mesg) {
    std::cout << mesg << "\n";
  }

  void tokenize(std::string path) {

    std::ifstream file;
    std::string line;

    log(path);

    file.open(path);

    if (!file.is_open()) {
      std::cerr << "Error: Could not open file \n"; 
    }

    while (std::getline(file, line)) {
      
      std::cout << line << "\n";
      
    }

    if (file.bad()) {
      std::cerr << "Error: Critical I/O error while reading.\n";
    } else if (!file.eof()) {
      std::cerr << "Error: Reading failed due to unexpected input/format.\n";
    }        
    
  }


  
    
} 
