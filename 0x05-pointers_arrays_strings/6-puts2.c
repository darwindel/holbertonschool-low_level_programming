#include <string.h>
#include <stdio.h>
#include "holberton.h"
/**
* puts2 - function will print every other character
*
* @str: will go into puts2 prototype
*
* Return: 0 if successful
*
*/
void puts2(char *str)
{

	int c;
	char l;

	for (c = 0; str[c] != 0; c++)
{
	if (c % 2 == 0)
{
	l = str[c];
	_putchar(str[l]);
}
}
	_putchar('\n');
}
