#include "lists.h"
#include <stdio.h>
/**
* add_nodeint_end - adds a new node at the end of a list
*
* @head: the head of list
* @n: the data to add
*
* Return: the address of the new element, NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	else
	{
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new
	}
	return (new);
}

}
