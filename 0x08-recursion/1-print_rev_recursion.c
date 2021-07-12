#include "holberton.h"
/**
* _print_rev_recursion - will print string in reverse
*
* @s: will be the string
*
* Return: nothing
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
