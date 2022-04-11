#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct get
{
    char *shape;
    int (*f)(int);
} get_fun;

#endif