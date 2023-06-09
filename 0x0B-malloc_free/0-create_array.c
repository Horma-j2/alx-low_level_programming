#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * initializes with a special character
 * @size: size of the array
 * @c: character initialized to the array
 * Return: NULL if it fails and POINTER if successful
 */

char *create_array(unsigned int size, char c)
{
	char *par;
	unsigned int i;

	par = malloc(sizeof(c) * size);

	if (!size || !par)
		return (NULL);
	for (i = 0; i < size; i++)
		par[i] = c;
	return (par);
}
