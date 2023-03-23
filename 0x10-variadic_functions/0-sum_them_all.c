#include "variadic_functions.h"

/**
 * sum_them_all- sum all integer
 * @n: number of interger
 * Return: integer value
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list op;

	if (n == 0)
		return (0);
	va_start(op, n);
	int sum = 0;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		sum = va_arg(op, int);
	}
	va_end(op);
	return (sum);
}
