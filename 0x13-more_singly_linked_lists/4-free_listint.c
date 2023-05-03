#include "lists.h"
/**
 * free_listint - Entry point
 * Code Description: Frees a listint_t list.
 * @head: Pointer to head node in the linked list
 */
void free_listint(listint_t *head)
{
listint_t *current_node;
while (head != NULL)
{
/* Setting a current variable to head node */
current_node = head;
head = head->next;
/* Free current node */
free(current_node);
}
}
