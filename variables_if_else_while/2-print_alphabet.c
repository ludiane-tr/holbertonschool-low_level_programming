#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the alphabet in lowercase
* Return: 0
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z')
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
