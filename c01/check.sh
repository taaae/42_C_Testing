#!/bin/bash

norminette -R CheckForbiddenSourceHeader ../..
cc -Wall -Wextra -Werror test.c
./a.out
