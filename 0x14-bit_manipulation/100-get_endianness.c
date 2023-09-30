#include "main.h"

/**
 * get_endianness - checks if a machine is indian
 * Return: 0 for B, 1 for L
 */
int get_endianness(void)
{
	unsigned int H = 1;
	char *K = (char *) &H;

	return (*K);
}

