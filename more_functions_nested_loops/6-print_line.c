#include "main.h"
/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: parameters
 * Return: Always 0.
 */
void print_line(int n)
{
	int i = 0;
	
	while (i < n)
	{
		n++;		
		_putchar('_');
	
	if (n <= 0)
		_putchar('/n');
	}
	_putchar('\n');
}
