#include "main.h"
#include <stdio.h>

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: parameters
 * @root: parameters
 *
 * Return: the square root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: parameters
 *
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
