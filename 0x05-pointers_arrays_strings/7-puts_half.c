#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: Printing the second half of a string
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
		len++;
	if (len % 2 == 0)
		len /= 2;
	else
		len = len / 2 + 1;
	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
