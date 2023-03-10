#include <stdio.h>

/**
 * main- entry function
 * @argc: argument parameter
 * @argv: an array of a command listed
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
