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
	static int length = 0;

	if (*s != '\0')
	{
		length++;
		_strlen_recursion(++s);
	}	
		return (length);
}
