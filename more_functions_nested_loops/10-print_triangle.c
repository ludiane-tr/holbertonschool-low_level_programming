#include "main.h"
/**
 * Prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, j;
	if (size > 0)
	{
		for (i = 0 ; i <= size; i++)
		{
			for (i = 0 ; i <= size; i--)
			{
				_putchar(' ');
			}
			for (j = 0 ; j <= size ; j++)
			{
				_putchar('#');
			}

			if (i == size)

			_putchar('\n');
		}
	}
	_putchar('\n');
}
