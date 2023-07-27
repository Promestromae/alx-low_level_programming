include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of a listint_t linked list.
 * @head: first node
 * @index: index of node to return
 * Return: pointer to node searching for on success, NULL otherwise
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
