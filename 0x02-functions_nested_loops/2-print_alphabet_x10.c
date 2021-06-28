#include "holberton.h"
/**
* print_alphabet_x10 - This will print the alphabet ten times
*
* Return: 0 if successful
*/
void print_alphabet_x10(void)
{
	char ch, i; 

 	 for (i = 0; i <= 10; i++)
{
		for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);
}
	_putchar(10);
}
}
