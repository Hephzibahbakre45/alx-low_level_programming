#include "main.h"

/**
 * _isdigit(int c)- entry function
 * @c: takes the digits
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

