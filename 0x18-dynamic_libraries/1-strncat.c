#include "main.h"

/**
 * _strncat- concatenate two string
 * @dest: destination
 * @src: source
 * @n: number of byte used
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int  i, j;

	for (i = 0; dest[i]; i++)
	{
		;
	}
	for (j = 0; src[j] && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);

}
