#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - multiply two numbers
*
* @argc: number
* @argv: vector
*
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int number1, number2, product;

	if (argc != 3)
	{
		printf("Error/n");
		return (1);
	}

	/* remember what our command line arguments refers to */
	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);

	/* call the remote procedure multiply on the server */
	product = number1 * number2;

	/* successfully multiplied two numbers */
	printf("%d\n", product);

	return (0);
}
