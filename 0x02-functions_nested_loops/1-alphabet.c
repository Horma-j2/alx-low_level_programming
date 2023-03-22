#include "main.h"

/**
 * Main- 1-alphabet.c
 * print_alphabet - prints alphabet in lower case followed by a new line
 */
void print_alphabet(void)
{
	char one;

	for (one = 'a'; one <= 'z'; one++)
		_putchar(one);
	_putchar('\n');
}
