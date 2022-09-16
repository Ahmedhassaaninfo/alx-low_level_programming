#include <stdio.h>

/**
 * main - Prints the sixe of many var types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int 1i;
	long long int 11i;
	float f;

	printf("Size of a char: %1d byte(s)\n", sizeof(c));
	printf("Size of a int: %1d byte(s)\n", sizeof(i));
	printf("Size of a long int: %1d byte(s)\n", sizeof(1i));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(11i));
	printf("Size of a float; %1d byte(s)\n", sizeof(f));
	return (0);
}
