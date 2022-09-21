#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to string to work on
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

		while (*(s + len) != '\0')
			len++;

	return (len);
}
