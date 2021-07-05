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
	int length = strlen(s);

	for (int i = 0; i < length / 2; i++)
{
	char temp = s[i];

	s[i] = s[length - 1 - i];
	s[length - 1 - i] = temp;
}
}
