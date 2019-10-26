#ifndef VAR_H
#define VAR_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct select - create s.
 * @q: input.
 * @u: input.
 *
 * Return: int
 *
 **/
typedef struct select
{
char *q;
void (*u)(va_list pa);
} tstruc;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
