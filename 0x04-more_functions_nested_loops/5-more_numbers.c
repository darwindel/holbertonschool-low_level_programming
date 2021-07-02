#include "holberton.h"
/**
* more_numbers - will print numbers ten times
*
* Return: 0 if successful
*
*/
void more_numbers(void)
{
	int n, i;

	for (i = 0; i <= 9; i++)
{
	for (n = '0'; n <= '14'; n++)
{
	_putchar(n);
}
	_putchar(10);
}
}
