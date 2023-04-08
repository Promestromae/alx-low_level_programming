#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of pointers to string
 * Return: 1 and type error for error,0 otherwise
 */
int main(int argc, char *argv[])
{
	int j, k, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);
	k = atoi(argv[2]);
	mul = j * k;

	printf("%d\n", mul);

	return (0);
}
