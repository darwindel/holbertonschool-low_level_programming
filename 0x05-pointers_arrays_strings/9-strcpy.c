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
	int size = 0;

	for (i = 0; src[i] != '\0'; i++)
{
	{
	size++;
	}
	dest[i] = src[i];
}
	dest[size] = '\0';
	return (dest);
}
