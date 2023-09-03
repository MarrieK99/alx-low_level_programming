#!/bin/bash

# Compile all .c files in the current directory and create liball.a
gcc -c *.c
ar -rc liball.a *.o
