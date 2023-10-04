#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 *
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *kichwa, *mpya;

	mpya = malloc(sizeof(listint_t));
	if (mpya == NULL)
		return (NULL);
	mpya->n = number;

	if (node == NULL || node->n >= number)
	{
		mpya->next = node;
		*kichwa = mpya;
		return (mpya);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	mpya->next = node->next;
	node->next = mpya;

	return (mpya);
}

