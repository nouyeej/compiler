cmake_minimum_required(VERSION 3.21)
project(hw2 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(hw2
        glob.h
        main.c
        printtoken.c
        reporterror.c
        symtable.c
        tn.h
        lex.yy.c
        printerror.c
        )
