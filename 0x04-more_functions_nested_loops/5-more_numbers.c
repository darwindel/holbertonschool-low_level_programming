#include "holberton.h"
/**
* more_numbers - will print numbers ten times
*
* Return: 0 if successful
*
*/
void more_numbers(void)
{
	int n, i, x;

	x = 14;


	for (i = 0; i <= 9; i++)
{
	for (n = '0'; n  <= x ; n++)
{
	_putchar(n);
}
	_putchar(10);
}
}
