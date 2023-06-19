#!/bin/bash
gcc -Wextra -Wall -pedantic -Werror -c -fPIC *.c
gcc -shared *.c -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
