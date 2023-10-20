#include "main.h"

/**
 * binary_to_uint - program converts a binary number to an
 * unsigned int.
 * @b: binary
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u;
	int l, ba;

	if (!b)
		return (0);

	u = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, ba = 1; l >= 0; l--, ba *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
		if (b[l] & 1)
			u += ba;
	}

	return (u);
}

