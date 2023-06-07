#!/bin/bash
C_FILES=$(ls *.c)
gcc -c $C_FILES
ar rcs liball.a *.o
rm -f *.o
