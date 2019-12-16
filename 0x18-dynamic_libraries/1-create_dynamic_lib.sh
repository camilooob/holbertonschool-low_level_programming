#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c -shared -o liball.so *.o
