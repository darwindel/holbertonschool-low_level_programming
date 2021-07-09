#include "holberton.h"
/**
* _strncat - will concatenate two strings
*
* @dest: will go into function
* @src: will go  into function
* @n: will go into function
*
* Return: 0 if successful
*/
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int i = 0;

	while (dest[a] != '\0')
	a++;

	while (src[i] != '\0' && i < n)
{
	dest[a] = src[i];
	i++;
	a++;
}
	return (dest);
}

