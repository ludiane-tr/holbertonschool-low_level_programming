#include <stdio.h>
/**
* main - Write a program that prints all single digit numbers.
* Return: 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	putchar('\n');
	return (0);
}
