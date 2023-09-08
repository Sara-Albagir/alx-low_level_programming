#include <stdio.h>

/**
 * main - is the main f
 *
 * Return: equals 0
*/

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
