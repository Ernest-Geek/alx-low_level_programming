#include "lists.h"
/**
 * sum_listint - Entry point
 * Code Description: returns the sum of all the data
 *(n) of a listint_t linked list
 * @head: Pointer to the first node of the linked list
 * Return: 0, if the list is empty
 */
int sum_listint(listint_t *head)
{
int result = 0;
listint_t *current = head;
/* Goes through the linked list and sums up all the data (n) */
while (current)
{
/* Sums up each node starting from head, then next node */
result += current->n;
current = current->next;
}
return (result);
}
