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
	fgets(dest, sizeof(dest), stdin);

	for (n = 0; dest[n] != '\0'; ++n)
{
	src[n] = dest[n];
}
	src[n] = '\0';

	return (dest);
}
