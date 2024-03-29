#include <stdio.h>

/**
 * main: Entry point
 *
 * Description: "Printing sizes of various data types present in my PC"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int ld;
	long long int lld;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
