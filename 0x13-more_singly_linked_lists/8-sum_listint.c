#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data (n) of a listint_t linked list.
 * @head: Pointer to the first node in the linked list.
 * Return: Sum of all data (n).
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *temp = head;

    while (temp)
    {
        sum += temp->n;
        temp = temp->next;
    }

    return (sum);
}

