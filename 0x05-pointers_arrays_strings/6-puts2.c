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

	int x, i;
	int n = 0;

	for (x = 0; str[x]; x++)
	{
	n++;
	}
	if (n % 2 == 0)
	{
	for (i = n / 2; str[i]; i++)
	{
	_putchar(str[i]);
	}
}
	else
	{
	for (i = (n - 1) / 2; str[i]; i++)
	{
	_putchar(str[i]);
	}
}
	_putchar('\n');
}
