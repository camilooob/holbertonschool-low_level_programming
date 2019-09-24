#include "holberton.h"
/**
  * _isalpha - checks for alphabetic character
  * @c: takes in a character
  * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
  */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
