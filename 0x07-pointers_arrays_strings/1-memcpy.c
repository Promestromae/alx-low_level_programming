#include "main.h"

/**
 * *_memcpy - function copies n bytes from memory area src to memory area destination
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
