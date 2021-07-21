#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* create_array - will create array of chars and initialize with specific char
*
* @size: size of array
* @c: specific char
*
* Return: pointer to array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
