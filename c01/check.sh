#!/bin/bash

norminette -R CheckForbiddenSourceHeader ../../ex0$1
cc -Wall -Wextra -Werror test$1.c
./a.out
rm a.out
