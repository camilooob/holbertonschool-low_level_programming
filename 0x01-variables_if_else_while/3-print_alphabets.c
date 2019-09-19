#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letra;
char LETRA;
for (letra = 'a'; letra <= 'z'; letra++)
putchar(letra);
for (LETRA = 'A'; LETRA <= 'Z'; LETRA++)
putchar(LETRA);
putchar('\n');
return (0);
}
