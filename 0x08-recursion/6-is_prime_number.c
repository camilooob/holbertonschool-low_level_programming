#include "holberton.h"
/**
 * _primo - Returns 1 if the input integer is a prime number
 * @primo: First input number
 * @test: Second input divisor
 *
 * Description: Returns 1 if the input integer is a prime number
 * Return: Returns 1 if is a prime number 0 otherwise
 */
int _primo(int test, int primo)
{
	if (primo == test)
		return (1);
	else if (primo % test == 0 || primo < 2)
		return (0);
	return (_primo(test + 1, primo));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: First input number
 *
 * Description: Returns 1 if the input integer is a prime number
 * Return: Returns 1 if is a prime number 0 otherwise
 */
int is_prime_number(int n)
{
	return (_primo(2, n));
}
