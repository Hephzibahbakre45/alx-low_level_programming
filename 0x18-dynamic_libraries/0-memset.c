#include "main.h"

/**
 * _memset- this is the entry point
 *@s: the source
 *@b: the byte
 *@n: the integer
 *Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
