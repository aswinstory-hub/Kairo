// lexer.cpp
#include <vector>
#include <fstream>
#include <iostream>
#include <kairo/lexer.hpp>
#include <string>

namespace lexer {

  void log(std::string& mesg) {
    std::cout << mesg << "\n";
  }


  std::vector<char> get_characters_from_source_code(std::string path) {

    // Declare Variables
    std::ifstream file;
    std::string line;
    std::vector<char> letters;
    char ch;

    log(path);


    // open file
    file.open(path);

    // Check if file is open
    if (!file.is_open()) {
      std::cerr << "Error: Could not open file \n"; 
    }


    // Get the characters from the file
    while (file.get(ch)) {
      
      if (ch == '\n' || ch == '\r' || ch == '\t') {
        continue; 
      }
      
      letters.push_back(ch);
      
    }

    // Check for errors when reading from the file
    if (file.bad()) {
      std::cerr << "Error: Critical I/O error while reading.\n";
    } else if (!file.eof()) {
      std::cerr << "Error: Reading failed due to unexpected input/format.\n";
    }        
    
    return letters;
  }
  
  void tokenize(std::string path) {

    std::vector<char> letters = get_characters_from_source_code(path);

    for (const auto& element : letters) {
      std::cout << element << " ";
    }

  }
    
} 
