#include "main.h"
/**
 * _memcpy- entry function
 * @dest:  destination
 * @src: source
 * @n: the byte
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);

}
