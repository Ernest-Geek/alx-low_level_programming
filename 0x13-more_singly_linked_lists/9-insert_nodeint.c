#include "lists.h"
/**
 * insert_nodeint_at_index - Entry point
 * Description: Inserts a new node at a given position.
 * @head: Pointer to pointer of the first node in the linked list
 * @idx: Index of the list where the new node should be added.
 * @n: The new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current_node = *head;
/* Where new is the new node, current as it is, i is a node */
unsigned int i;
/* Allocates memory to new node */
new_node = malloc(sizeof(listint_t));
/* Checks if new node is empty and sets its data */
if (!new_node)
{
return (NULL);
}
new_node->n = n;
/* Insert idx at beginning of the list(starts at 0) and adds new node */
if (idx == 0)
{
new_node->next = current_node;
*head = new_node;
return (new_node);
}
/* Locate node before location for new node, then insert new node  */
for (i = 0; i < (idx - 1); i++)
{
/* Checks if current node and next node is null before inserting */
if (current_node == NULL || current_node->next == NULL)
{
return (NULL);
}
current_node  = current_node->next;
}
/* Insert new node between current and new node */
new_node->next = current_node->next;
current_node->next = new_node;
return (new_node);
}
