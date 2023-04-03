#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: variable to search in
 * @accept: characters to compare with
 * Return: pointer to c in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + i) == *(accept + k))
					return ((s + i));
		}
	}
	return (0);
}
