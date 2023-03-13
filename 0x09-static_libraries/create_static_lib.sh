#!/bin/bash
gcc -Wall -Wextra -Werror -predantic -c *.c
ar rc liball.a *.o
