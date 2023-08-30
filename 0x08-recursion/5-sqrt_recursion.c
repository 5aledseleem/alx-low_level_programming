#include "main.h"

/**
 * _sqrt_recursion - find sqr root
 * @n: int
 * @val: sqr root
 * Return: integer
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find sqr root
 * @n: integer
 * @val: sqr root
 * Return: int
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}

