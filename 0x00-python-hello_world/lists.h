#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - A singly linked list node
 * @n: The integer data stored in the node
 * @next: A pointer to the next node in the list
 * Description: This structure defines a
 * node for a singly linked list.
 * It contains an integer value (@n) and a pointer to the
 * next node in the list (@next).
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

/* LISTS_H */
#endif
