#include "variadic_functions.h"

/**
 * sum_them_all - sum all numbers.
 * @n: input number.
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int x = 0;
unsigned int i;

if (n == 0)
{
return (0);
}

va_start(ap, n);
for (i = 0; i < n; i++)
x += va_arg(ap, const unsigned int);
va_end(ap);
return (x);
}
