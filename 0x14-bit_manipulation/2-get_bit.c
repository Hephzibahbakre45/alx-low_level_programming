#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: unsigned long integer
 * @index: unsigned int
 * Return: return the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_numb;

	if (index > 63)
		return (-1);

	bit_numb = (n >> index) & 1;
	return (bit_numb);
}
