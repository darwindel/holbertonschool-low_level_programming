#include "holberton.h"
/**
* print_most_numbers - will print without two and four
*
* Return: 0 if successful
*
*/
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
{
	if (n != '2' && n != '4')
{
	_putchar(n);
}
}
	_putchar('\n');
}
