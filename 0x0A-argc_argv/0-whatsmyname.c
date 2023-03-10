#include <stdio.h>

/**
 * main- main function to print the program
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
