#include "main.h"

/**
 * _strlen_recursion - calculates the strg length
 * @s: pointer to stg
 * Return: integer
*/

int _strlen_recursion(char *s)
{
	int nnn = 0;

	if (*s > 0)
	{
		nnn += _strlen_recursion(s + 1) + 1;
	}
	return (nnn);
}

