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

	int i;
	char l;

	for (i = 0; str[i] ; i++)
{
	if (i % 2 == 0)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
}
