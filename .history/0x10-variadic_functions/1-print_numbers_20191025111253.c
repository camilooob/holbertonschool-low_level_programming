#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - sum all numbers.
 * @n: input number.
 * @separator: input breakl.
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
  int i;
unsigned int arg1 = n;
  va_start(ap, arg1);
  for (i = arg1; i >= 0; i = va_arg(ap, int))
    printf("%d ", i);
  va_end(ap);
  putchar('\n');

}
