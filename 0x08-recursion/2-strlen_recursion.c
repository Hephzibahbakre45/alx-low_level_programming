#include "main.h"

/**
 *  _strlen_recursion- the main function
 * @s: takes the string
 * Return: return 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
