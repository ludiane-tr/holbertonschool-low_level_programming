#include "main.h"
#include <stdio.h>
/**
 * strlen - returns the length of a string.
 * @s:parameters
 * return: the len of *s.
 */
int _strlen(char *s)
{ 
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

