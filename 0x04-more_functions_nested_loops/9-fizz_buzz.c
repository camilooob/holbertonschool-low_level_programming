#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: Always.
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int mod5 = i % 5;
		int mod3 = i % 3;

		if (mod5 == 0 && mod3 != 0)
		{
		printf("Buzz");
		}

		if (mod3 == 0 && mod5 != 0)
		{
		printf("Fizz");
		}

		if (mod3 == 0 && mod5 == 0)
		{
		printf("FizzBuzz");
		}

		if ((mod3 != 0) && (mod5 != 0))
		{
		printf("%d", i);
		}

		if (i != 100)
		{
		printf(" ");
		}

	}
	printf("\n");
	return (0);
}
