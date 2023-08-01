#include "main.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: double pointer to the beginning of the list.
 * Return: head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	first = *head;
	*head = first->next;
	n = free->n;
	free(first);
	return (n);
}
