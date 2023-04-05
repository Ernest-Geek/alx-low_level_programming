#include <stdlib.h>
#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *previous;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    if (index == 0)
    {
        current = *head;
        *head = (*head)->next;
        free(current);
        return (1);
    }

    previous = NULL;
    current = *head;
    for (i = 0; i < index && current != NULL; i++)
    {
        previous = current;
        current = current->next;
    }

    if (current == NULL)
        return (-1);

    previous->next = current->next;
    free(current);

    return (1);
}

