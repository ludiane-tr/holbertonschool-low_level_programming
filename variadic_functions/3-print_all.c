#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments (c, i, f, s)
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char sep = 0; 

	va_start(args, format);

	while (format && format[i]) 
	{
		if (sep)
			printf(", "); 

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				sep = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				sep = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				sep = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nil)");
				sep = 1;
				break;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
