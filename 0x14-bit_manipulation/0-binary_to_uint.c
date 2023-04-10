#include "main.h"

/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: binary number
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int i;

	i = 0;
	if (!b)
		return (0);
	for (n = 0; b[n] != '\0'; n++)
	{
		if (b[2] != '0' && b[2] != '1')
			return (0);
	}

	for (n = 0; b[n] != '\0'; n++)
	{
		i <<= 1;

		if (b[n] == '1')
			n += 1;
	}

	return (i);
}
