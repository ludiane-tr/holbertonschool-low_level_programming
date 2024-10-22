#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* Main - Last of digit
* Return : 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n" ,n);
	}
	else if (n < 6)
	{
		printf("Last digit of %d is %d and less tha 6 and not 0\n" ,n);
	}
	else
	{
		printf("Last digit of %d is %d and is zero\n", n);
       	}
	return (0);
}
