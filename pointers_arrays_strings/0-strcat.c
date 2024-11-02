#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings.
 * @dest: parameters
 * @src: parameters
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
        int index = 0;

        while (src[index])
        {
                dest[index] = src[index];
                index++;
        }
        dest[index] = '\0';

        return (dest);
}
