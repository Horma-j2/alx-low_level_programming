#include "main.h"

/**
 * _memset - set memory with a specific value
 * @s: variable to be changed
 * @b: value to replace with
 * @n: number of memory to change
 *
 * Return: value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
