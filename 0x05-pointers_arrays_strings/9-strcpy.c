#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
* _strcpy - this will copy the string pointed
*
* @dest: will go into prototype
*
* @src: will go into prototype
*
* Return: 0 if successful
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
{
	dest[i] = src[i];
	_putchar('\0');
}
	return (dest);
}
