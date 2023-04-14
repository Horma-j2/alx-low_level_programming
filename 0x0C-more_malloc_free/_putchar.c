#include <unistd.h>

/**
 * _putchar - writes the character to stand out
 * @c: character to stand out
 * Return: if successful 1
 * on error: -1 is returned, and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
