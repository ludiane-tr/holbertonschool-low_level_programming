#include "variadic_functions.h"
/**
 * print_strings -  function that prints strings, followed by a new line
 *
 * @separator: This is the input separator
 * @n: This is the number of items
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *s;

		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && (i + 1))
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);
}

