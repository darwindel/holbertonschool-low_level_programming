#include "holberton.h"

/**
* _puts_recursion - will print a string followed by a new line
*
* @s: the string
*
* Return: 0 if successful
*/
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
