#include <string.h>
#include "holberton.h"
#include <stdio.h>
/**
* rev_string - will reverse a string
*
* @s: will go into the prototype
*
* Return: 0 if successful
*
*/
void rev_string(char *s)
{
	char *end = s + strlen(s) - 1;


	while (s < end)
{
	char temp = *s;

	*s = *end;
	*end = temp;
	s++;
	end--;
}
}
