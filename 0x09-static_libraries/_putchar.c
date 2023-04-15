#include <unistd.h>

/**
 * _putchar - writes the character c to stand out
 * @c: the character to print
 * Return: if successful, 1
 * on error: -1 is returned, and error is set approximately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
