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
	int index = 0, dest_len = 0;// dest len est une variable qui stocke la longueur de dest qui est l'endroit où src sera ajouté

	while (dest[index++])// récupère la taille de dest et parcoure chaque caractère avec l'index
		dest_len++;// la boucle continue tant que le caractère nul n'est pas atteint.

	for (index = 0; src[index]; index++)//récupérer la taille de src
		dest[dest_len++] = src[index];// copier les caractères de src dans dest à partir de la position dest_len
	return (dest);
}
