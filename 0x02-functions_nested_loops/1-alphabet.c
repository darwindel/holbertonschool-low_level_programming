#include "holberton.h"
/**
* print_alphabet- will use this prototype to print the alphabet a..z
*
* Return: 0 if successful
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);
}
	_putchar(10);
}
