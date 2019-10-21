cmake_minimum_required(VERSION 3.15)
project(examples C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

#add_executable(examples
#        circularIntListDemo.c
#        circularIntNode.c
#        circularIntNode.h
#        circularLuckGame.c
#        doublyIntListDemo.c
#        doublyIntNode.c
#        doublyIntNode.h
#        singlyIntListDemo.c
#        singlyIntNode.c
#        singlyIntNode.h
#        )
add_executable(circularIntListDemo circularIntListDemo.c
        circularIntNode circularIntNode.h
        circularIntNode circularIntNode.c
        )