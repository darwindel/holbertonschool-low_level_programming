#include "holberton.h"
#include <stdio.h>
/**
* _puts - will print a string followed by a new line
*
* @str: variable that will go into the prototype
*
* Return: 0 if successful
*
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
