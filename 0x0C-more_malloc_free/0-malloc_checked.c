#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: number of bytes to allocate
 * Return: pointer to the allocated memory
 * If malloc fails, status value is equal to 98
 */

void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
