#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriptin: program prints the size of various types using sizeof function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of a int: %lubyte(s)\n", sizeof(int));
	printf("size of a long int: %lubyte(s)\n", sizeof(long int));
	printf("size of a long long int: %lubyte(s)\n", sizeof(long long int));
	printf("size of a float: %lubyte(s)\n", sizeof(float));
	return (0);
}
