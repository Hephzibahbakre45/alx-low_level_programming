#include <stdio.h>
/**
 * main- entry point
 *
 * Return: return 0
 *
 */
int main(void)
{
	int i, e;

	i = 0;
	e = 0;

	while (e < 10)
	{
		i = 0;

		while (i < 10)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 9 && e == 8)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}

	return (0);

}
