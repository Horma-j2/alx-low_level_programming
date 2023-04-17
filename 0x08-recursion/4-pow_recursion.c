#include "main.h"

/**
 * _pow_recursion - returns the value of a number raised to another number
 * @x: number 1
 * @y: number 2
 * Return: the power of a number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	--y;
	return (x * _pow_recursion(x, y));
}
