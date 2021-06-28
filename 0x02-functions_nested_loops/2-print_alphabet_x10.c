#include "holberton.h"
/**
* print_alphabet_x10 - This will print the alphabet ten times
*
* Return: 0 if successful
*/
void print_alphabet_x10(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	for (ch = 0; ch <= 10; ch++)
{
	_putchar(ch);
}
	_putchar(10);
}
