#include"main.h"
/**
 * print_square - prints a square.
 * @size: parameters
 */
void print_square(int size)
{
	int x, i;

	i = 0;

	if (size < 1)
		_putchar('\n');

	while (i < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		i++;
	}
}
