#include "holberton.h"
/**
* print_square - will print out a square
*
* @size: will give the size of the square
*
* Return: 0 if successful
*
*/
void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size > 0)
	{
	while (a < size)
	{
	while (b < size)
	{
	_putchar('#');
	b++;
	}
	b = 0;
	a++;
	_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
