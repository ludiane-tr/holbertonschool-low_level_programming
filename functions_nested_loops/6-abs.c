#include "main.h"
#include <stdio.h>
#include <math.h>
/**
*_abs - write a function that computes the absolute value.
*@n: The integer to be computed
* Return: The absolute value of the integer.
*/
int _abs(int)
{
	int n;
	{
		if (n >= 0)
			return (n);
		else
			return (-n);
	}
	return (0);
}
