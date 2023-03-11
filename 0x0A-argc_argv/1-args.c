#include <stdio.h>

/**
 * This program prints number 
 * arguements pass
 * to it 
 *
 * return: 0
 *
 */
int main(int argc, char *argv[])
{
	int num = 0;

	while (num < argc)
	{
		printf("%d\n", num);
		num++;
	}
}
