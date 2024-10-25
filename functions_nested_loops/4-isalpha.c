#include"main.h"
/*
* _isalpha- checks for alphabetic character.
* @r: parameter
* Return:0
*/
int _isalpha(int r)
{
	if ((r >= 'a' && r <= 'z') ||
	    (r >= 'A' && r <= 'Z'))
		return (1);
	else
		return (0);
}
