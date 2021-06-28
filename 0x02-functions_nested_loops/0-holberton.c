#include "holberton.h"
/**
* main - will print holberton using putchar
*
* Return: 0 if successful
*/
int main(void)
{
	char c[9] = "Holberton";
	int i = 0;

	while (c[i] != '\0')
{
	_putchar(c[i]);
	i++;
}
	_putchar('\n');
	return (0);
}
