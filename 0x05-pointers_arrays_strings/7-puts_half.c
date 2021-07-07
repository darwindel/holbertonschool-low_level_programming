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

	for (x = 0; str[x] != '\0'; x++)
{
	n++;
}
	if (n % 2 == 0)
{
	for (i = n / 2; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
	else
{
	for (i = ((n - 1) / 2) + 1; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
}
