project(say-hello) #sub proj name

# create lib
add_library(
        say-hello
        src/say-hello/hello.h
        src/say-hello/hello.cpp
)

# setting lib dir
target_include_directories(say-hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

# setting a Variable
target_compile_definitions(say-hello PUBLIC SAY_HELLO_VERSION=1)
#PRIVATE will be used only in lib
#INTERFACE outside lib
