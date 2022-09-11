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
	long int i;
	long long int i;
	float f;

	printf("Size of a char: %c", sizeof(c));
	printf("Size of an int: %d", sizeof(i));
	printf("Size of a long int: %ld", sizeof(i));
	printf("Size of a long long int: %lld", sizeof(i));
	printf("Size of a float: %f", sizeof(f));
	return (0);
}
