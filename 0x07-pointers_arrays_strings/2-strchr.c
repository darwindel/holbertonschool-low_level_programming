#include "holberton.h"
/**
* _strchr - will locate a character in a string
*
* @s: will go into function
* @c: will go into function
*
* Return: 0 if successful
*/
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
	if (*s == c)
	return (s);
	if (!*s)
	return ("\0");
	}
	return ("\0");
}
