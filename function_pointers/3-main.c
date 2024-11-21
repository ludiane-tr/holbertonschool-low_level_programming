#include "3-calc.h"
#include <string.h>

/**
 * main - program to perform simple operations
 * @argc: argument count
 * @argv: array of arguments
 * Return: exits 0 normally, 98 on argc error, 99 on illegal operator
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	func = get_op_func(argv[2]);
	result = func(n1, n2);

	printf("%d\n", result);
	return (0);
}
