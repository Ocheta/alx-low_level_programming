#include "main.h"

/**
 * _strlen - returns length of a string
 * Description: function to return the length of a  string
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

		while (*(s + len) != '\0')
			len++;

	return (len);
}
