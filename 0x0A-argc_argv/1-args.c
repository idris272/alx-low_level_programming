#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	int num = 0;

	while (num <= argc)
	{
		printf("%d\n", num);
		num++;
	}
}
