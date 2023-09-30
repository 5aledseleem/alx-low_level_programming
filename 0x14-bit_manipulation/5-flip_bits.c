#include "main.h"

/**
 * flip_bits - coun the num of bits
 * to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int o, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (o = 63; o >= 0; o--)
	{
		current = exclusive >> o;
		if (current & 1)
			count++;
	}

	return (count);
}

