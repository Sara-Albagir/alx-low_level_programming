#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main fun
 * Return: 0
 * @argc: parameter
 * @argv: parameter
 */

int main(int argc, char *argv[])
{
	int num1, num2, nul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		nul = num1 * num2;
		printf("%d\n", nul);
	}
	return (0);
}
