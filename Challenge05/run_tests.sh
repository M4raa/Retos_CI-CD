#!/bin/sh
CC=gcc
CFLAGS="-Wall -Wextra -Werror"
$CC $CFLAGS -o test_challenge05 starter.c test_challenge05.c
echo "Programa listo para testear con script."
if ./test_challenge05; then
  echo -e "\033[0;32mPASSED\033[0m"
else
  echo -e "\033[0;31mFAILED\033[0m"
fi