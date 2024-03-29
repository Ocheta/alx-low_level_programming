#include "main.h"

/**
 * _strcat - Function that concatenates
 * @dest: first parameter
 * @src: second parameter
 * Return: return pointer to @ dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++] != '\0')
	{
	dest_len++;
	}

	for (index = 0; src[index] != '\0'; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
