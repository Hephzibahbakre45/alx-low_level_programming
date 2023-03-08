#include "main.h"

/**
 * _print_rev_recursion- the function that print string in a reverse manner
 * @s: takes the string
 * Return: return 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
