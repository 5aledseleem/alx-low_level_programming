#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in upercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a', CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
