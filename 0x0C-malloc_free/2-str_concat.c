#include "holberton.h"
#include <stdlib.h>
/**
* str_concat - concatenate two strings
*
* @s1: string 1
* @s2: string 2
*
* Return: new pointer with both strings or NULL if fails
*/
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j;
	int s1len = 0;
	int s2len = 0;
	int s3len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len])
		s1len++;
	while (s2[s2len])
		s2len++;

	s3len = s1len + s2len;

	s3 = malloc(sizeof(char) * (s3len + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];

	for (j = 0; s2[j]; j++, i++)
		s3[i] = s2[j];

	return (s3);
}



