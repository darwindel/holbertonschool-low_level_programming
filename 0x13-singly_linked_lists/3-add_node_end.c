#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: the string whose length to return
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
* add_node_end - adds a new node at the end
*
* @head: head of the list
* @str: new node
* Return: address of new element, NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{








}
