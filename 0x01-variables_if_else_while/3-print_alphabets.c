#include <stdio.h>

/**
 * main- entry point
 *
 * Return: return o
 *
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
	putchar(lower);
	}

	char upper;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
	putchar(upper);
	}
	putchar('\n');

	return (0);

}
