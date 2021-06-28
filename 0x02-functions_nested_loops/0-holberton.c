#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* main - will print holberton using putchar
*
* Return: 0 if successful
*/
int main(void)
{
	char name[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	unsigned int c;

	for (c = 0; c < sizeof(name); c++)
{
_putchar(name[c]);
}
_putchar('\n');
	return (0);
}
