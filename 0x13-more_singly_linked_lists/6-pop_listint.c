#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a listint_t linked list,
 *              and returns the head node's data (n).
 * @head: Pointer to the first element.
 * Return: Data of the element deleted on success, 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int num;

    if (!head || !*head)
        return (0);

    num = (*head)->n;
    temp = (*head)->next;
    free(*head);
    *head = temp;

    return (num);
}

