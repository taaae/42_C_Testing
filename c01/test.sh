#!/bin/bash

norminette -R CheckForbiddenSourceHeader ../..
cc -l ../.. -Wall -Wextra -Werror test.c
./a.out
