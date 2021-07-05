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

	while (str[i] != '\0')

{
	_putchar(str[i]);
	i++;
}
	_putchar('\n');
}
