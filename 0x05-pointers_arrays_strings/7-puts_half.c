#include <string.h>
#include <stdio.h>
#include "holberton.h"
/**
* puts_half - function will print half of the string
*
* @str: will go into puts2 prototype
*
* Return: 0 if successful
*
*/
void puts_half(char *str)
{

	int x, i;
	int n = 0;

	for (x = 0; str[x]; x++)

	if (n % 2 == 0)
{
	for ((i = n / 2); str[i]; i++)
{
	_putchar(str[i]);
}
}
	else
{
	for ((i = (n - 1) / 2); str[i]; i++)
{

	_putchar(str[i]);
}
}
	_putchar('\n');
}
