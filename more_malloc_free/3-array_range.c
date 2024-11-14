#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  creates an array of integers
 * @min: minimal value
 * @max: maximum value
 *
 * Return: a pointer
 */
int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);

	int size = max - min + 1;
	int *array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (int i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
