#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * Return: 0
 * @str: parameter
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
