#include "holberton.h"
/**
* print_sign - this function will print the sign of the number
*
* @n: Number will be pass to print_sign function
*
* Return: 0 if successful
*/
int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	else if (n == 0)
{
	_putchar('0');
	return (0);
}
	else
{
	_putchar('-')
	return (-1);
}
}
