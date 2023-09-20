#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * Return: 0
 * @dest: parameter
 * @src: parameter
 * @n: parameter
*/

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
