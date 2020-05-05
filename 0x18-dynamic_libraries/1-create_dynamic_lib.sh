#!/bin/bash
gcc -fPIC -Wall -pedantic -Werror -Wextra -c *.c
gcc -shared -Wall -pedantic -Werror -Wextra -o liball.so *.o
