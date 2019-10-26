#include "variadic_functions.h"

/**
* print_all - print all input
* @format: format of input
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *string;
	va_list list;

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(list, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				string = va_arg(list, char *);
				if (string != NULL)
				{
					printf("%s", string);
					break;
				}
				printf("(nil)");
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i'
		|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
