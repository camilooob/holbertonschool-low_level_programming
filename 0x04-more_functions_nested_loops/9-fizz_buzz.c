#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: Always.
*/
int main(void)
{
int num = 0;
int multiplodecinco;
int multiplodetres;

for (num = 1; num <= 100; num++)
{
multiplodecinco = num % 5 == 0;
multiplodetres = num % 3 == 0;
if (multiplodetres)
{
printf("Fizz");
printf(" ");
}
else if (num == 100)
{
printf("Buzz");
}
else if (multiplodecinco)
{
printf("Buzz");
printf(" ");
}
else if (multiplodecinco && multiplodetres)
{
printf("FizzBuzz");
printf(" ");
}
else
{
printf("%i", num);
printf(" ");
}
}
printf("\n");
return (0);
}
