#include "holberton.h"
/**
* string_toupper - will convert lowercase to uppercase in string
*
* @s: will go into function
*
* Return: 0 if successful
*/
char *string_toupper(char *s)
{
	int i;


	for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
	s[i] =   s[i] - 32;
	}
}
{
	return (s);
}
}
