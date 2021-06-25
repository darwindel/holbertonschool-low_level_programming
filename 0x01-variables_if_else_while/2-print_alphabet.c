#include <stdio.h>
/**
*main - will print the alphabet in lowercase
*
* Return: 0 if successful
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
{
	putchar(ch);
}
	putchar('\n');
	return (0);
}
