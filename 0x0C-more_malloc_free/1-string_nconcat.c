#include "main.h"
#include <stdlib.h>

/**
 * strlent - get string length
 * @str: string length
 * Return: number
 */

int strlent(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++);
	return (size);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number
 *
 * Return: string number
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_length, s2_length, i;
	char *concat_arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_length = strlent(s1);
	s2_length = (int) n;
	if (strlent(s2) == (int) n)
		s2_length = strlent(s2);
	concat_arr = malloc((s1_length + s2_length + 1) * sizeof(*concat_arr));
	
	if (concat_arr == 0)
		return (NULL);
	for (i = 0; i < s1_length + s2_length; i++)
	{
		if (i < s1_length)
			concat_arr[i] = s1[i];
		else
			concat_arr[i] = s2[i - s1_length];
	}
	
	concat_arr[i] = '\0';
	
	return (concat_arr);
}
