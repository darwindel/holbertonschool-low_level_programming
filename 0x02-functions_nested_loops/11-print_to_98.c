#include "holberton.h"
/**
* print_to_98 - will print numbers to 98
*
* @n: number will be put into print_to_98
*
* Return: 0 if successful
*/
void print_to_98(int n)
{
	int x;

	if (n < 0)
	x = 0;

	else
	x = n;

	for (int i = x; i <= 98; i++)
{
	_putchar(i);
	if (i != 98)
{
	_putchar(',');
	_putchar(' ');
}
}
}
