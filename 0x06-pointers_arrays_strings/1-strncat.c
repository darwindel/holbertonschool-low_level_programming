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
	int length, i;

	length = n;
	while (dest[length] != '\0')
{
	++length;
}
	for (i = 0; src[i] < 'n'; ++i, ++length)
{
	dest[length] = src[i];
}
	dest[length] = '\0';
{
	return(dest);
}
}
