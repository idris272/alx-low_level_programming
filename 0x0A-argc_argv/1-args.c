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
	(void)*argv[];

	printf("%d\n", argc);
	return (0);

}
