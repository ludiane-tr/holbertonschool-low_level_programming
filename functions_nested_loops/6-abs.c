#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 *_abs - write a function that computes the absolute value.
 *@n: parameter.
 *Return: The absolute value of the integer.
*/
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
