#include "main.h"
#include <unistd.h>
/**
 * _putchar- print c with _putchar
 *
 * Return: return 1 on success
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

			}
