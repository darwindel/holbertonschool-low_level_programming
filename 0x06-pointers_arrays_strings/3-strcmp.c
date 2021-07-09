#include "holberton.h"
#include <stdio.h>
/**
* _strcmp - will compare two strings
*
* @s1: will go into function
* @s2: will go into function
*
* Return: 0 if successful
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
{
	if (s1[i] > s2[i])
	return (s1[i] - s2[i]);
	if (s1[i] < s2[i])
	return (s1[i] - s2[i]);

	i++;
}
	return (0);
}
