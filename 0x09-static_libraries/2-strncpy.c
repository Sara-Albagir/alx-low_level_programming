#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string.
 * Return: the result
 * @dest: parameter
 * @src: parameter
 * @n: parameter
*/

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
