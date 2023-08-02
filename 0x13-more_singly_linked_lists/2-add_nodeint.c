#include "lists.h"

/**
 * add_nodeint - Entry point
 * @head: first input
 * @n: seocnd input
 *
 * Return: value of new
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
