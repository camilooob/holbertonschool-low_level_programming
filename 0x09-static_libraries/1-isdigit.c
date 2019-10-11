#include "holberton.h"
/**
 ** _isdigit - if is a digit between 1 a 9 show 1
 ** @c: integer input
 ** Return: 0 or 1
 **/
int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}


