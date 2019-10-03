#include "holberton.h"
/**
 * reverse_array - a function that compares two strings.
 * @a: first string
 * @n: second string
 * Return: value of comparison
 */
void reverse_array(int *a, int n)
{
int i;
int rev;
rev = 0;
for (i = 0; i < n; i++)
{
rev = a[i];
a[i] = a[n - 1];
a[n - 1] = rev;
n--;
}
}
