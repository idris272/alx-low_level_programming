#include <stdio.h>

/**
 *
 * this simple program prints all 
 * arguements it reccives 
 *
 *
 * return: 0
 *
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
