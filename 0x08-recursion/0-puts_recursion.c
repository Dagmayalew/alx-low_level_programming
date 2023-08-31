#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * @s: character
 */


void _puts_recursion(char *s)
{
	/* Base case: if the end of string is reached, return */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
