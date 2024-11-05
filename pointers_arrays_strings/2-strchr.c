#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @c: parameters
 * @s: parameters
 * Return: pointer c in the string s.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
