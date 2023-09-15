#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: a parameter
 * Return: 0
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (int j = 0 ; j <= i ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
