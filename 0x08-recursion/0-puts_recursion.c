#include "main.h"
/**
 * _puts_recursion -  prints a string
 * @s: string
 * Returns: void
 */
void _puts_recursion (char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}

}
