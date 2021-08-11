#include <stdio.h>
#include "lists.h"
/**
* add_nodeint - will add a new node at the beginning of listint_t
*
* @head: address of node
* @n: the data to add to the node
*
* Return: address of new element or null if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
