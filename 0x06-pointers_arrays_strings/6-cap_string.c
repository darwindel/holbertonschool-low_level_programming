#include "holberton.h"
/**
* cap_string - will capitalize all words of a string
*
* @n: will go into function
*
* Return: 0 if successful
*/
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
{
	if (i == 0)
	{
	if (n[i] >= 'a' && n[i] <= 'z')
		n[i] = n[i] - 32;
	continue;
	}
	if (n[i] == ' ')
	{
	++i;
	if (n[i] >= 'a' && n[i] <= 'z')
	{
	n[i] = n[i] - 32;
	continue;
	}
}
	else
{
	if (n[i] >= 'A' && n[i] <= 'Z')
	n[i] = n[i] + 32;
}
}
	return (n);
}
