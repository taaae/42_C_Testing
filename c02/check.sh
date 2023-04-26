#!/bin/bash

if [ $1 -gt 9 ]
then
	norminette -R CheckForbiddenSourceHeader ../../ex$1
fi
if [ 10 -gt $1 ]
then
	norminette -R CheckForbiddenSourceHeader ../../ex0$1
fi
cc -Wall -Wextra -Werror test$1.c
./a.out
rm a.out
