#include <stdio.h>
#include <stdlip.h>
/**
 * main - prints the minmum num of coins
 * to make change for an amount of money.
 * @argc: num of commandline args.
 * @argv: pointer to an arr of commandline of args.
 * Return: 0 if success, non-zero if fall
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, lc = 0, mon = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (mon >= c[i])
			{
				lc += mon /c[i];
				mon = mon % c[i];
				if (mon % c[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

