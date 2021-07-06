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

	for (i = 0 ; i < strlen(str) ; i += 2)
{
	if (i % 2 == 0)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
}
