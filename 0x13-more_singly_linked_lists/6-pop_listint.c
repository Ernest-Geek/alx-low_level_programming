#include "lists.h"
/**
 * pop_listint - Entry point
 * Code Description: Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: Pointer to pointer of first node in linked list
 * Return: 0, if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *current;
int data;
/* Checks if head is empty */
if (!*head)
{
return (0);
}
/* Stores head node in current */
current = *head;
/* data stored in the head node */
data = current->n;
/* Making next node the new head node */
*head = (*head)->next;
free(current);
return (data);
}
