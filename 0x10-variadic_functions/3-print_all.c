#include "variadic_functions.h"

/**
 * printc - print char
 * @pa: Input data.
 * Return: Nothing.
 */
void printc(va_list pa)
{
printf("%c", va_arg(pa, int));
}

/**
 * printin - print int
 * @pa: Input data.
 * Return: Nothing.
 */
void printin(va_list pa)
{
printf("%d", va_arg(pa, int));
}
/**
 * printfl - print float
 * @pa: Input data.
 * Return: Nothing.
 */

void printfl(va_list pa)
{
printf("%f", va_arg(pa, double));
}

/**
 * prints - print string
 * @pa: Input data.
 * Return: Nothing.
 */
void prints(va_list pa)
{
char *str = va_arg(pa, char *);

if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}

/**
 * print_all - print all inputs
 * @format: Diferent types of data.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
va_list pa;
int i, y;
char *separa = "";
tstruc drive[] =  {
{"c", printc},
{"i", printin},
{"f", printfl},
{"s", prints},
{NULL, NULL}
};
y = 0;
va_start(pa, format);
while (format && format[y])
{
i = 0;
while (i < 4)
{
if (format[y] == *drive[i].q)
{
printf("%s", separa);
drive[i].u(pa);
separa = ", ";
}
i++;
}
y++;
}
printf("\n");
va_end(pa);
}
