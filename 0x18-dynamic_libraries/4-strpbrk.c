#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string containing bytes to look for
 *
 * Return: pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	int l, m;

	for (l = 0; *s != '\0'; l++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (*s == accept[m])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
