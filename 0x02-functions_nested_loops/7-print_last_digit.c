#include "holberton.h"
/**
* print_last_digit - will print the last digit of a number
*
* @n: number that will be put into print_last_digit
*
*Return: 0 if successful
*/
int print_last_digit(int n)
{
	if (n == 0)
	return (0);
	else
{
	int rest = (n % 10);

	_putchar(rest);
	return (rest);
}
}
