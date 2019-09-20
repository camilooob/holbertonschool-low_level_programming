#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char numero;
char letra;
for (numero = '0'; numero <= '9'; numero++)
putchar(numero);
for (letra = 'a'; letra <= 'f'; letra++)
putchar(letra);
putchar('\n');
return (0);
}
