#include <stdio.h>
/**
* main - will print name of file
*
* @argc: count
* @argv: array vector
* Return: name of file
*/
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
