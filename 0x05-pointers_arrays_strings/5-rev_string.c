#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: a parameter
*/

void rev_string(char *s)
{
	if (s == NULL)
	{
		return;
	}
	int lenth = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++
		end--
	}
}
