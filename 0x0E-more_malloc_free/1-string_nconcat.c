#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* string_nconcat - will concatenate two strings
*
* @s1: first string
* @s2: second string
* @n: variable set greater or equal to s2
*
* Return: concatenated string or entire string s2 or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)

	s3 = malloc((i + (n * sizeof(*s2) + 1) * sizeof(*s3)));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];

	for (j = 0; s2[j] && j < n; j++, i++)
		s3[i] = s2[j];
		s3[i] = '\0';
	return (s3);
}
