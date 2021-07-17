#include "holberton.h"
#include <stdio.h>
/**
* main - program that prints the number of arguments passed into it
*
* @argc: number
* @argv: vector
*
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int count;
	(void)argv;

	for (count = 0; count <= argc; count++)
		{}
		printf("%d\n", count - 2);
		return (0);
}
