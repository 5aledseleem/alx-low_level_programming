#include "main.h"

/**
 * _strlen - returns the lengrh of string
 *
 * @s: string input parameter
 *
 * Return: lengrh of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
