#include "main.h"
#include <stdio.h>

/**
 * main - is the main f
 *
 * print_to_98 -  prints all natural numbers from n to 98
 *
 * Return: 0
*/

void print_to_98(int n)
{

	if (n <= 98)
	{
	for (; n <= 98 ; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 98 ; n--)
	{
	if (n == 90)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
}
