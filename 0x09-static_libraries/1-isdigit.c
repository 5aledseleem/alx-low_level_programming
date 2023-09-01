#include "main.h"

/**
 * _isdigit - checks if input between 0 - 9
 *
 * @c: input
 *
 * Return: 1 if is digit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
