#include "main.h"

/**
 * _puts_recursion- the function that print out a string
 *@s: takes the string
 *Return: return 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
