#include <stdio.h>

/**
 * main - is the main fun
 * Return: 0
*/

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 && i % 5 == 0)
			_putchar('FizzBuzz');
		else if (i % 3 == 0)
			_putchar('Fizz');
		else if (i % 5 == 0)
			_putchar('Buzz');
		else
			_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}
