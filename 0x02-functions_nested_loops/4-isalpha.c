#include "holberton.h"
/**
* _isalpha - will check for letter, lowercase or uppercase
*
* @c: Number to pass to _islower function
*
* Return: 0 if successful
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
