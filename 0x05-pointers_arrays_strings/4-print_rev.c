#include "holberton.h"
#include <stdio.h>
/**
* print_rev - will print a string in reverse
*
* @s: will go into the prototype
*
* Return: 0 if successful
*/
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
{
}
	for (i = i - 1; i >= 0; i--)
{
	_putchar(s[i]);
}
	_putchar('\n');
}
