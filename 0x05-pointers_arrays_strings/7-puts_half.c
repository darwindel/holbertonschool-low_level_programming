#include <string.h>
#include <stdio.h>
#include "holberton.h"
/**
* puts2 - function will print every other character
*
* @str: will go into puts2 prototype
*
* Return: 0 if successful
*
*/
void puts2(char *str)
{

        int i, a;
        char l;

        for (i = 0; str[i] != 0; i++)
        {
        }
        if (i % 2 == 0)
{
        for ((a = i / 2); str[a] != 0; a++)
{
        l = str[a];
        _putchar(l);
}
}
        else
{
        for ((a = (i - 1) / 2); str[a] != 0; a++)
{
        l = str[a];
        _putchar(l);
}
}
        _putchar('\n');
}
