#include "math.h"
/**
 * div - divides 2 numbers
 * @a: divisor
 * @b: number
 * Return: divident
 */
int div(int a, int b)
{
	if (a == 0)
	{
		return (-1);
	}
	return (a / b);
}
