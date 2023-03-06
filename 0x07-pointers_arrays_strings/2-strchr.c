#include "main.h"

/**
 * _strchr- entry point
 * @s: source
 * @c: the character
 * Return: first character or null
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);

	return ('\0');

}

