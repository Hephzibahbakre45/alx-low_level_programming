#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list word;
	unsigned int i;
	char *str;

	va_start(word, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(word, char *);

	if (str == NULL)
	printf("%s", str);
	else
	printf("(nil)");

	if (i < n - 1)
	if (separator)
	printf("%s", separator);
	}

	printf("\n");
	va_end(word);
}
