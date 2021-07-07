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

	for (c = 0; str[c]; c++)
	{
	if (c % 2 == 0)
	{
	_putchar(str[c]);
}
}
	_putchar('\n');
}
