#include "main.h"
#include <string.h>

/**
 * _strcat - Function that concatenates
 * @dest: first parameter
 * @src: second parameter
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
