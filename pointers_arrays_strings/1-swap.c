#include "main.h"
#include <stdio.h>

/**
 * swap_int - that swaps the values of two integers.
 * @a: parameters
 * @b: parameters
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
