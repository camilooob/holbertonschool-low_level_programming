#include "variadic_functions.h"

/**
 * print_numbers - print numbers.
 * @separator: string separator.
 * @n: Input.
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", (va_arg(ap, unsigned int)));
		if ((i != (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
