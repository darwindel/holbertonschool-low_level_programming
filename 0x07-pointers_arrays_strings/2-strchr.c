#include <stdio.h>
#include "holberton.h"
/**
* _strchr - will locate a character in a string
*
* @s: will go into function
* @c: will go into function
*
* Return: pointer to first ocurrence of character c or null if not found
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if  (*s != c)
			s++;
	else
		return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
