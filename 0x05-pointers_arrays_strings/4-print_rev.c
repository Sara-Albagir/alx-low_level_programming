#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: parameter
*/

void print_rev(char *s)
{
	if (s == NULL)
	{
	return;
	}
	int length = 0;

	while (s[length] != 0)
	{
		length++;
	}
	for (int i = length - 1 ; i >= 0 ; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
