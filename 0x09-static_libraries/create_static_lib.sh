#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.cs
ar -rc liball.a *.o
ranlib liball.a
