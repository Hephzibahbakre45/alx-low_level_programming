#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers-print all the numbers
 * @separator: the string to be printed
 * @n: number of integers to be passed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
