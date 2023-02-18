#include <stdio.h>
/**
 * main- Entry point
 * Description: Print alphabtes expect q and e
 * Return: Return 0
 */
int main(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
			continue;

		else if (alphabet == 'e')
			continue;

		putchar(alphabet);
	}
	putchar('\n');

		return (0);

}
