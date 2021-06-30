#include "holberton.h"
/**
* jack_bauer - will be using this to print every minute in a day
*
* Return: 0 if successful
*/
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	for (h = 0; h <= 23; h++)
{
	for (m = 0; m <= 59; m++)
{
	if (h < 10)
	_putchar('0');
	_putchar(h);
	_putchar(':');

	if (m < 10)
	_putchar('0');
	_putchar(m);
	_putchar('\n');
}
}
}
