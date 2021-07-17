#include "holberton.h"
#include <stdio.h>

/**
* main - prints number of arguments passed into it
*
* @argc: arg counter
* @argv: arg vector
*
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)

	printf("%s\n", argv[c]);

	return (0);
}
