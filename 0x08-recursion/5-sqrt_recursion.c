#include "main.h"

/**
 * _sqrt_recursion - prints the natural square root of a number
 * @n: number
 * @num: number 2
 * Return: square root of number
 */

/**
 * _get_square - calculate the square of a given number
 * @n: number
 * @num: number 2
 * Return: result
 */

int _sqrt_recursion(int n);
int _get_square(int n, int num)
{
	if (n < 0)
		return (-1);
	if (n <= 2)
		return (1);
	return (_get_square(n, 1));
}

int _get_square(int n, int num)
{
	if (n == num)
		return (-1);
	if (n * num == num)
		return (num);
	return (_get_square(n, num + 1));
}
