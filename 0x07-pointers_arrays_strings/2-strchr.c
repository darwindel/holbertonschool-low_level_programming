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
	do
	{
	if  (*s == c) 
	return (s);
	}
	while (*s++);
	return ("\0");
}
