/**
 * swap_int - a function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 */
#include "holberton.h"
void swap_int(int *a, int *b)
{
/*a=98 b=42*/
int change;
/*42 = 42*/
change = *b;
/*98 = 98*/
*b = *a;
/*42 = 42*/
*a = change;
}
