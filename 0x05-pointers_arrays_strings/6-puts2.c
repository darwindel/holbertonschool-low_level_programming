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

	int x;
	char n;

	for (x = 0; str[x] != 0; x++)
{
	if (x % 2 == 0)
{
	n = str[x];
	_putchar(str[n]);
}
}
	_putchar('\n');
}
