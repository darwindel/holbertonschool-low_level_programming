#include "holberton.h"
/**
* _strlen_recursion - will return the length of string
*
* @s: the string
*
* Return: 0 if successful
*/
int _strlen_recursion(char *s)
{

	if (*s != 0)
		{

		return (1 + _strlen_recursion(++s));

		}
	return (0);
}
