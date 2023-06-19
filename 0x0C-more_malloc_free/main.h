#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int _putchar(char c);
int _strlen(char *s);
int is_digit(char *s);
void errors(void);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
void *my_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);

#endif
