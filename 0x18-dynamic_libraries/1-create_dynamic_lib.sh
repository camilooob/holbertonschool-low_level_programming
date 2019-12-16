#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fPIC *.c -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
