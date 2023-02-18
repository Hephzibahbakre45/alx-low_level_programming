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
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
	putchar(lower);
	}


	for (upper = 'A'; upper <= 'Z'; upper++)
	{
	putchar(upper);
	}
	putchar('\n');

	return (0);

}
