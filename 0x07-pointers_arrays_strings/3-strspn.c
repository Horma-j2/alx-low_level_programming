#include "main.h"

/**
 * _strspn - prints the length of a prefix substring
 * @s: string to check in
 * @accept: characters to look for
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		for (k = 0; *(s + j) != *(accept + k); k++)
		{
			if (*(accept + k) == '\0')
				return (j);
		}
	}
	return (j);
}
