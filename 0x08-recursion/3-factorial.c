#include "main.h"

/**
 * factorial- the entry function
 * @n: takes the integer
 * Return: return -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
