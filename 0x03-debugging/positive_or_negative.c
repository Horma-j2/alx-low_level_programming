#include "main.h"

/**
 * positive_or_negative - checks numbers that are positive or negative
 * @i: number to be checked
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
};
