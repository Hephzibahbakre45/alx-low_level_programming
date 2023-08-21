#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c -fpic
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
