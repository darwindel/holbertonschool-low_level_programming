#include <stdio.h>
#include "holberton.h"
/**
* _isupper - will check for an uppercase character
*
* @c: the variable that will go into _isupper
*
* Return: 0 if successful
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
{
	return (1);
}
	else
	return (0);
}
