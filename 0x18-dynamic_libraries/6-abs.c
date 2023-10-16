#include "main.h"

/**
 * _abs- computes the absolute valve of an integer
 *
 * @i: input number as an integer
 *
 * Return: absolute value
 *
 */
int _abs(int i)
{
	if (i < 1)
	{
		return (i * (-1));
	}
	else
	{
		return (i);
	}
}
