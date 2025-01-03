#include "3-calc.h"

/**
 * main - program to perform simple operations
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (argv[2][1] != '\0' || (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/' &&  argv[2][0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	func = get_op_func(argv[2]);
	result = func(num1, num2);

	printf("%d\n", result);
	return (0);
}
