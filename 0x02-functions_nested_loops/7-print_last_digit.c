#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * Return: 0
 *
 * @a: a parameter
*/

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
