#include "main.h"

/**
 * string_toupper- change all lowercase letter to a string to uppercase
 * @s: input string
 * Return: the pointer to dest
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
}
}
return (s);

}
