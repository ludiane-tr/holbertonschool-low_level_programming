#include <stdio.h>
#include "main.h"
/**
 * Print_array - prints n elements of an array of integers.
 * @a: parameters.
 * @n: parameters.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
