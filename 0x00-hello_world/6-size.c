#include <stdio.h>

/**
* main - print the data types
*
*Return: 0 if successful
*/
int main(void)
{
	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long int));
	printf("Size of a long long int: %lu byte\n", sizeof(long long int));
	printf("Size of a float: %lu byte\n", sizeof(float));
	return (0);
}

