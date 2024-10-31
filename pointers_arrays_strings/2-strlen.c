#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s:The string to get the length of.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

