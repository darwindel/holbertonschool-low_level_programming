#include "holberton.h"
/**
* _memcpy - will copy memory area
*
* @dest: will go into function
* @src: will go into function
* @n: will go into function
*
* Return: 0 if successful
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *) src;
	char *cdest = (char *) dest;

	unsigned int i;

	for (i = 0; i < n; i++)
{
	cdest[i] = csrc[i];
}
	return (cdest);
}
