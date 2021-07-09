#include "holberton.h"
#include <stdio.h>
/**
* _strncpy - will copy a string
*
* @dest: will go into function
* @src: will go into function
* @n: will go into function
*
* Return: Always 0
*/
char *_strncpy(char *dest, char *src, int n)
{

	while (dest[n] != '\0')
{
	src[n] = dest[n];
	n++;
}
	src[n] = '\0';

	return (dest);
}
