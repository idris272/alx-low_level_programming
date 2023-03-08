#include "main.h"

/**
 * _puts_recursion: prints a string
 * @s: string
 * Returns: void
 */

void _puts_recursion(char* s)
{
	if(*s)
	{
		_putchars(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\0');
	}
}
