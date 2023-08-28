#include "main.h"

/**
 * *_strpbrk - searching about string
 * @s: string
 * @accept: string to match
 * Rrturn: pointer to the byte
*/

char *_strpbrk(char *s, char accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
