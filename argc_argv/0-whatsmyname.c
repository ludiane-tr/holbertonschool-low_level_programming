#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: Number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
