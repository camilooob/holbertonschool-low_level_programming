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
  int x = n;

  va_start(ap, n); 
  for (i = n; i >= 0; i = va_arg(ap, const unsigned int))
    _putchar(i);
  va_end(ap);
  _putchar(separator);
}
