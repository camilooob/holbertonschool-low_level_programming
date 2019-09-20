#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letra;
for (letra = 'a'; letra <= 'z'; letra++)
if (letra != 'q' && letra != 'e')
putchar(letra);
putchar('\n');
return (0);
}
