#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * print_listint - Prints all elements of a listint_t linked list
 * @h: A pointer to the head of the list
 * Description: This function traverses a linked
 * list of type listint_t,
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int n; /* number of nodes */

	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n++;
	}

	return (n);
}

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t linked list
 * @head: A pointer to the pointer of the first node of the listint_t list
 * @n: The integer to be included in the new node
 *
 * Description: This function appends a new node with the given integer (@n)
 * Return: The address of the new element on success, or NULL on failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (new);
}

/**
 * free_listint - Frees a listint_t linked list
 * @head: A pointer to the first node of the listint_t linked list
 *
 * Description: This function frees the memory allocated for each node in
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
