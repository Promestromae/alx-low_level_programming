#include "lists.h"

/**
 * listint_len.c - function that returns the number of elements in a
 *                 linked listint_t list.
 * @h: linked list to be traversed
 *
 * Return: number of nodes
 *
 * Description: This function counts the number of elements in a linked list
 *              of type listint_t.
 */
size_t listint_len(const listint_t *h)
{
    size_t num = 0;

    while (h)
    {
        num++;
        h = h->next;
    }

    return (num);
}

