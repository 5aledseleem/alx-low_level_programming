#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabets exept e nad q
 *
 * Return: Always 0 (sucess)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
