#include "holberton.h"
/**
* _strspn - will get the length of a prefix substring
*
* @s: goes into function
* @accept: goes into function
*
* Return: 0 if successful
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	char *p;

	for (n = 0; *s; s++, n++)
{
	for (p = accept; *p && *p != *s; p++)

	if (!*p)
	break;
}
	return (n);
}
