#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: parameter
 * @size: parameter
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
