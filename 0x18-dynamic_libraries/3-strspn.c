#include "main.h"

/**
 * _strspn -function that gets the length of a prefix substring
 * @s: string
 * @accept: string containing characters to match s
 *
 * Return:  number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, k, l, flag;

	l = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		flag = 0;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				l++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (l);
		}
	}

	return (0);
}
