#include "lists.h"
/**
 * reverse_listint - Entry point
 * Code Description: Reverses a listint_t linked list.
 * @head: Pointer to pointer of first node in the linked list
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_node = NULL;
listint_t *curr_node, *next_node;
if (!head || !*head)
{
return (NULL);
}
curr_node = *head;
while (curr_node)
{
/* Save the next node */
next_node = curr_node->next;
/* Reverse pointer direction */
curr_node->next = prev_node;
/* Move to the next nodes */
prev_node = curr_node;
curr_node = next_node;
}
/* Set head to the last node (prev_node) */
*head = prev_node;
return (*head);
}
