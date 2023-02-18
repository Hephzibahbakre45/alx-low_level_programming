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

	char a;

	for (a = 'A'; a <= 'Z'; a++)
	{
	putchar(a);
	}
	putchar('\n');

	return (0);

}
