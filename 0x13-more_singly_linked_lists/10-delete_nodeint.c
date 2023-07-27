#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node at index index of a listint_t linked list.
 * @head: Pointer to the first element in the list.
 * @index: Index of the node to delete.
 * Return: 1 on success, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp, *current;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        current = *head;
        *head = (*head)->next;
        free(current);
        return (1);
    }

    temp = *head;
    for (i = 0; temp != NULL && i < index - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
        return (-1);

    current = temp->next;
    temp->next = current->next;
    free(current);

    return (1);
}

