#include "holberton.h"
int _strlen(char *s)
{
int contador = 0;
	while (s[contador] != '\0') 
	{
		contador++;
	}
return (contador);
}
