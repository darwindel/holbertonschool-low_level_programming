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

	int i, a;
	char l;

	for (i = 1; str[i] != 0; i++)
	{
	}
	if (i % 2 == 0)
{
	for ((a = i / 2); str[a] != 0; a++)
{
	l = str[a];
	_putchar(l);
}
}
	else
{
	for ((a = (i - 1) / 2); str[a] != 0; a++)
{
	l = str[a];
	_putchar(l);
}
}
	_putchar('\n');
}
