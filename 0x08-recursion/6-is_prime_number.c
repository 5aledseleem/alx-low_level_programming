#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - cheaks prime nums
 * @othrn: integer
 * @n: integer
 * Return: 0 or 1
*/

int check_prime(int n, int othrn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - check all numbers lessthan n
 * @n: integer
 * @othrn: integer
 * Return: integer
*/
int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (int check_prime(n, othrn + 1));
}

