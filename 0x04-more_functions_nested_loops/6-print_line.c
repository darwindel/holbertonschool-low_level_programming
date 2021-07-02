#include "holberton.h"
/**
* print_line - will print a line
*
* @n: will go in to print_line
*
* Return: 0 if successful
*/
void print_line(int n)
{
	for (int i = n; i > 0; i--)
{
	_putchar('_');
}
	_putchar('\n');
}
