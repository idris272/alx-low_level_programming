#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	int num = 0;

	while (num < argc)
		printf("%s\n", argv[num]);
		num++;

	return (0);
}
