#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of
 * a listint_t linked list
 * @h: A pointer to the head of the list
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *iCur;
	unsigned int n;

	iCur = h;
	n = 0;
	while (iCur != NULL)
	{
		printf("%i\n", iCur->n);
		iCur = iCur->next;
		n++;
	}

	return (n);
}

/**
 * add_nodeint - Adds a new node at
 * the beginning of a listint_t linked list
 * @head: A pointer to a pointer of the start of the list
 * @n: The integer to be included in the new node
 * Return: The address of the
 * new element (new node) or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *iNew;

	iNew = malloc(sizeof(listint_t));
	if (iNew == NULL)
		return (NULL);

	iNew->n = n;
	iNew->next = *head;
	*head = iNew;

	return (iNew);
}

/**
 * free_listint - Frees a listint_t linked list
 * @head: A pointer to the head of the list to be freed
 * Return: This function does not return a value (void).
 */
void free_listint(listint_t *head)
{
	listint_t *iCur;

	while (head != NULL)
	{
		iCur = head;
		head = head->next;
		free(iCur);
	}
}
