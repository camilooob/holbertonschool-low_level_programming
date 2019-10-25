#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = (va_arg(ap, char *)));
		if (str != NULL)
				printf("%s", str;
				else
				{
				printf("(nil)");
				}

			if ((i != (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
