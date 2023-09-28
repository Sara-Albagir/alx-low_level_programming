#include "main.h"

/**
 *  _puts_recursion - prints a string, followed by a new line.
 *  @s: parameter
 *  Return: 0
*/

void _puts_recursion(char *s)
{
	if (*S != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
