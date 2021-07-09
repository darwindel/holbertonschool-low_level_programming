#include "holberton.h"
/**
* _memset - will fill memory with a constant byte
*
* @s: will go into function
* @b: will go into function
* @n: will go into function
*
* Return: 0 if successful
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	char *cs = (char *) s;

	for (i = 0; i < n; i++)
	{
	cs[i] = b;
	}
	return (cs);
}
