#include "main.h"

/**
 * _strcpy - Copies a string to another location
 * @dest: where the string needs to be copied to
 * @src:  where the string is
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = *(src + len);
	return (dest);
}

