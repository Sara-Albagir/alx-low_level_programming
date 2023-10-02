#include <stdio.h>

/**
 * main - the main fun
 * Return: 0
 * @argc: parameter
 * @argv: parameter
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
