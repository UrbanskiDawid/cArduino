#!/bin/bash

mkdir OUT

#compile Example 1
g++ \
	-std=c++0x\
	-ISOURCE \
	SOURCE/cArduino.cpp \
	EXAMPLES/simple-read.cpp \
	-o OUT/simple-read


#compile Example 2
g++ \
        -std=c++0x\
        -ISOURCE \
        SOURCE/cArduino.cpp \
        EXAMPLES/read-write.cpp \
        -o OUT/read-write


