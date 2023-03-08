#include "main.h"

/**
 *  _pow_recursion- the entry function
 *  @x: takes the integer value
 *  @y: takes the integer value
 *  Return: return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
