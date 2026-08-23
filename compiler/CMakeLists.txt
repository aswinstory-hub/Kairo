add_executable(kc
    src/main.cpp
)

target_include_directories(kairo
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/include
)
