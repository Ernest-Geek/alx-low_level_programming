#include "lists.h"
/**
 * get_nodeint_at_index - Entry point
 * Code Description: Returns the nth node of a listint_t linked list.
 * @head: Pointer to first node in the linked list
 * @index: index of the node, starting at 0
 * Return: NULL, if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
/* Declaring the i variable as the node */
listint_t *current_node;
/* Go through list until index or end of list is reached */
for (current_node = head; current_node && index > 0; index--)
{
current_node = current_node->next;
}
/* If index is greater than number of nodes in list, return NULL */
if (!current_node)
{
return (NULL);
}
return (current_node);
}
