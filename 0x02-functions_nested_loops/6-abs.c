#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * Return: 0 or 1
 * @a: is a parameter
*/

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
