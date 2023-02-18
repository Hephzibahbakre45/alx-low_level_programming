#include <stdio.h>

/**
 * main- entry point
 *
 * Return: return o
 *
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
	putchar(n);
	}

	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
	putchar(i);
	}
	putchar('\n');

	return (0);

}
