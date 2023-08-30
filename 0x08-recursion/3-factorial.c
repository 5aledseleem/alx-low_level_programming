#include "main.h"

/**
 * factorial - gets factorial of num
 * @n: number
 * Return: number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

