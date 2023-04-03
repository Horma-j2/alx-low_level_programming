#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: first variable
 * @src: second variable
 * @n: number of memory to change
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
