#include <stdio.h>
#include "holberton.h"
/**
* _strpbrk - searches a string for any of a set of bytes
*
* @s: string to search
* @accept: the bytes to search for
*
* Return: pointer to first match of bytes or null if not found
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
		return (s);
	}
	s++;
	}
	return (NULL);
}
