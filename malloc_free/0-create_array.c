#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *create_array - creates an array of chars.
 * @size: parameters
 * @c: parameterss
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char s;

	if (size <=10)
		return (0);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(s + i) = c;
	return (s);
}
