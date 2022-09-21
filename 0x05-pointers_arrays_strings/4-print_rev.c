#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: printing a string in reverse order followed by a new line.
 * Return: void
 */

void print_rev(char *s)
{
	int mee = 0;

	while (*(s + mee) != '\0')
	{
		mee++;
	}
	mee--;
	while (mee >= 0)
	{
		_putchar(*(s + mee));
		mee--;
	}
	_putchar('\n');
}
