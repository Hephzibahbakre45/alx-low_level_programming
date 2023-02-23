#include <stdio.h>
/**
 * main- main function
 * Description: print the sum of even Fibonacci numbers up to a fib value
 * Return: 0
 */

int main(void)
{
	int i = 1;

	int j = 2;

	int total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);

}
