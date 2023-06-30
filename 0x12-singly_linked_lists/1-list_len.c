#include "lists.h"
/**
 * list_len - Entry point
 * Description: Returns number of elements in linked list_t list
 * @n: Pointer to the head of the linked list
 * Return: Number of nodes in linked list
 */
size_t list_len(const list_t *n)
{
size_t count_nodes = 0;
while (n != NULL)
{
/* Increment count for each node */
count_nodes++;
/* Next node */
n = n->next;
}
return (count_nodes);
}
