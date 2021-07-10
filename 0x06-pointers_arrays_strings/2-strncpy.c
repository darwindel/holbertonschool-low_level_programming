#include "holberton.h"
#include <stdio.h>
/**
* _strncpy - will copy a string
*
* @dest: will go into function
* @src: will go into function
* @n: will go into function
*
* Return: 0 if successful
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int a = 0;
	int b = 0;

	while (src[a] != '\0')
		a++;

	while (dest[b] != '\0')
		b++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
