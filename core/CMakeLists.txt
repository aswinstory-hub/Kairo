add_library(kairo_core
    src/lexer.cpp
)

target_include_directories(kairo_core
    PUBLIC
      ${CMAKE_CURRENT_SOURCE_DIR}/include
)
