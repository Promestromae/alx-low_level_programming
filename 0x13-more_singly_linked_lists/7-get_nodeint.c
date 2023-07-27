#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a listint_t linked list.
 * @head: Pointer to the first node.
 * @index: Index of the node to return.
 * Return: Pointer to the node searching for on success, NULL otherwise.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int q = 0;
    listint_t *temp = head;

    while (temp && q < index)
    {
        temp = temp->next;
        q++;
    }

    return (temp ? temp : NULL);
}

