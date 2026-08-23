add_executable(kc
    src/compiler.cpp
)

target_link_libraries(kc
    PRIVATE
        kairo_core
)

target_include_directories(kc
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/include
)
