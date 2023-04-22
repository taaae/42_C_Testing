#!/bin/bash

norminette -R CheckForbiddenSourceHeader ../../ex00 ../../ex01 ../../ex02 ../../ex03 ../../ex04 ../../ex05 ../../ex06 ../../ex07 ../../ex08 ../../ex09 ../../ex10 ../../ex11 ../../ex12
cc -Wall -Wextra -Werror test.c
./a.out
rm a.out
