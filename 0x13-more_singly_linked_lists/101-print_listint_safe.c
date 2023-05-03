#include "lists.h"
/**
 * print_listint_safe - Entry point
 * Description: Prints a listint_t linked list.
 * @head: Pointer to the first node of the linked list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *node, *next_node;
size_t count = 0;
if (!head || !head->next)
{
return (0);
}
/* Traverse the linked list */
node = head;
while (node)
{
/* Print current node */
printf("[%p] %d\n", (void *)node, node->n);
count++;
/* Break loop if next pointer points to previous node */
if (node > node->next)
{
node = node->next;
}
else
{
next_node = node->next;
printf("-> [%p] %d\n", (void *)next_node, next_node->n);
break;
}
}
return (count);
}
