#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies the string pointed to by @src.
 * @dest: parameters
 * @src: parameters
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
