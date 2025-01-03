#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: parameter of the string to be searched.
 * @needle: parameter of the substring to be located.
 *
 * Return: a pointer to the beginning or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
