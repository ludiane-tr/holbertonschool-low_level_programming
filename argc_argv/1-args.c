#include<stdio.h>
/**
 * main - Prints the number of arguments passed into it.
 * @argc: Numbers of parameters.
 * @argv: Pointer of array of pointers containing strings entering main.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
