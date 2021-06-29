#include "holberton.h"
/**
* jack_bauer - will be using this to print every minute in a day
*
* Return: 0 if successful
*/
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
{
	for (m = 0; m <= 59; m++)
{
	_putchar(h);
	_putchar(':');
	_putchar(m);
	_putchar("/n");
}
}
}
