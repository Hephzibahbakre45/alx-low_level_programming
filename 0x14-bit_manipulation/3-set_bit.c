#include "main.h"

/**
 * set_bit - function that set the value of bit
 * @n: unsigned long integer
 * @index: unsigned int
 * Return: return -1 or 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);
	return (1);
}
