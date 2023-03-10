#include <stdio.h>

/**
 * main- entry function
 * @argc: argc parameter
 * @argv: array of a command listed
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);

}
