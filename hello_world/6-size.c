#include <stdio.h>

/**
* main - prints the size of various types on the computer it is compiled and run on
* Return: Always O.
*/

int main(void)

{
	printf("Size of a char = %lu byte(s) \n", sizeof(char)*1 );
	printf("Size of an int = %lu byte(s) \n", sizeof(int)*4 );
	printf("Size of a long int = %lu byte(s) \n", sizeof(long int)*8 );
	printf("Size of a long long int = %lu byte(s) \n", sizeof(long long int)*8 );
	printf("Size of a float = %lu byte(s) \n", sizeof(float)*4 );

	return (O);
}
