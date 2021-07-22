#include <stdlib.h>
#include "holberton.h"
/**
* _strdup - return pointer to a new space in memory that contains copy of str
*
* @str: the string
*
* Return: pointer or Null if failing
*/
char *_strdup(char *str)
{
	char *new_str;
	int i;
	int length = 0;

	if (!str)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;

	new_str = malloc(sizeof(char) * (length + 1));

	if (!new_str)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	new_str[length] = '\0';

	return (new_str);
}
