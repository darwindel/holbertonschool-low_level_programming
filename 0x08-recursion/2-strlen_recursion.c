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
	{
	static int l = 1;

	if (*s != '\0')
		{
		l++;
		_strlen_recursion(s + 1);
		}
		return (l);
	}
}
