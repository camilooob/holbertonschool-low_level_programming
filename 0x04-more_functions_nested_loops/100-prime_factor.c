#include <stdio.h>
/**
 * main - principal function of the program
 *
 * Return: Always is 0
 */
int main(void)
{
unsigned long int target = 612852475143;
unsigned long int largest;
for (largest = 2; largest < target;)
{
	if ((target % largest) == 0)
	{
		target = target / largest;
		largest = largest;
	}
	else
	{
		largest++;
	}



}
printf("%lu\n", largest);
return (0);
}
