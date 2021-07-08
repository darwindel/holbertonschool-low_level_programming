#include "holberton.h"
/**
* _strcat - will concatenate two strings
*
* @dest: will go into protype
* @src: will go into prototype
*
* Return: 0 if successful
*
*/
char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;

	while (dest[length] != '\0')
{
	++length;
}
	for (i = 0; src[i] != '\0'; i++, ++length)
{
	dest[length] = src[i];
}
	dest[length] = '\0';
{
	return (dest);
}
}
