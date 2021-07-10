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
	while (*s != '\0')
	{
		if  (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
{
	return (s);
}
	else
{
	return ("\0");
}
}
