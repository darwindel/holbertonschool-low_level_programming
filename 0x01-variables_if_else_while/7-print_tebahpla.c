#include <stdio.h>
/**
* main - print the reverse alphabet
*
* Return: 0 if correct
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
{
	putchar(c);
}
	putchar('\n');
	return (0);
}
