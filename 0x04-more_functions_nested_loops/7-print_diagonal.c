#include "holberton.h"
/**
* print_diagonal - will print diagonally
*
* @n: will go into print_diagonal
*
* Return: 0 if successful
*/
void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
{
	while (a < n)
{

	while (b < a)
{
	_putchar(' ');
	b++;
}
	a++;
	b = 0;
	_putchar('\\');
	_putchar('\n');
}
}
	else

	_putchar('\n');

}
