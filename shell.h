#ifndef _SHELL_H_
#define _SHELL_H_
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

char *findpath(char *comando);
char *str_concat(char *str1, char *str2);
int str_lenght(char *string);
char str_compare(char *str1, char *str2, int n);
char *_getenv(const char *name);
int print_env(void);
int builtin(char *comando);
#endif
