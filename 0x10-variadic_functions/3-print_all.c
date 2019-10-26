#include "variadic_functions.h"

/**
 * printc - print char
 * @pa: Input data.
 * Return: Nothing.
 */
void printc(va_list pa)
{}

/**
 * printin - print char
 * @pa: Input data.
 * Return: Nothing.
 */
void printin(va_list pa)
{}
/**
 * printfl - print char
 * @pa: Input data.
 * Return: Nothing.
 */

void printfl(va_list pa)
{}

/**
 * prints - print char
 * @pa: Input data.
 * Return: Nothing.
 */
void prints(va_list pa)
{}

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
        {'c', printc},
        {'i', printin},
        {'f', printfl},
        {'s', prints}
    };
    y = 0;
    i = 0;
    va_start(pa, format);
    while (format[y] != '\0')
    {
        while (i < 4)
        {
            if (format[y] == drive[i].q)
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
    va_end(listed);
}
