#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the first node.
 * @n: Data to insert in the new node.
 * Return: A pointer to the new node on success, else NULL.
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

