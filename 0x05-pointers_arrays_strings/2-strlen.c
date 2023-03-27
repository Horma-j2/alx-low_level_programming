#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: length of string to be printed
 * Return: count of string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++);
	{
		count++;
	}
	return (count);
}
