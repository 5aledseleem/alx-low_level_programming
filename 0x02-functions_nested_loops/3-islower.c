#include "main.h"

/**
 * _islower - function to check if
 *		charachter is lowercase
 *
 * @c: checks input of function
 *
 * Resturn: returns 1 if 'c' is lowercase
 *		otehrwise always 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
