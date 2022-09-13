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

	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(ld));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(lld));
	printf("Size of a float: %f byte(s)\n", sizeof(f));

	return (0);
}
