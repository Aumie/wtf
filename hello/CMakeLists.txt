# sub-proj name
project(hello)

# adding main.cpp
add_executable(wtf main.cpp)

# linking to the lib
target_link_libraries(wtf PRIVATE say-hello)

