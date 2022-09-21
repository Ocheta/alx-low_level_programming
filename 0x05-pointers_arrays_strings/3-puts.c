#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: Printing string to stdout followed by a new line
 * Return: void
 */

void _puts(char *str)
{
	int mee = 0;
	while (*(str + mee) != '\0')
	{
		_putchar(*(str + mee));
		mee++;
	}
	_putchar('\n');
}
