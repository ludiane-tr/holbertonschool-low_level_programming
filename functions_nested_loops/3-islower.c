#include"main.h"
/**
 * _islower - write a function that checks for lowercase character.
 * @c: parameter
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
