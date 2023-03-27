#include "main.h"

/**
 * swap_int - swaps values
 * @a: value of integer 1
 * @b: value of integer 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
