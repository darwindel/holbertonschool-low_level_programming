#include "holberton.h"
#include <stdio.h>
/**
* _strstr - this will locate a substring
*
* @haystack: the string to find substring
* @needle: the occurence that is in the string
*
* Return: will return to the pointer or null if substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
{
	for (i = 0; needles[i]; i++)
	{
	if (haystack[i] != needle[i])
		break;
	}
	if (i != s)
		haystack++;
	else
		return (haystack);
	}
	return (NULL);
}
