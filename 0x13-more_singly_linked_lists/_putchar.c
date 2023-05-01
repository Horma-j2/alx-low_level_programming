#include <unistd.h>

/**
 * _putchar - writes the character c to stand out
 * @c: the character to stand out
 *
 * Return: On success 1
 * On error: -1 is returned, and error is set appropraitely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
