#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - Prints a string, in reverse.
 * @s: parameters
 */
void print_rev(char *s)
{
	int length = 0;
	int i;
	
	while (s[length] != '\0')
	{
		length++;
	}
	{
		for (int i = length - 1; i >= 0; i--)
		{
			putchar(s[i]);
		}
	}
	_putchar('\n');
}
