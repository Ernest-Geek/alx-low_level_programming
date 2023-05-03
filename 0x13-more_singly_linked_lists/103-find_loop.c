#include "lists.h"
/**
 * find_listint_loop - Entry point
 * Description: Finds the loop in a linked list.
 * @head: Pointer to the head of the linked list
 * Return: Address of node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;
/* Check if list is NULL, or just an element */
if (head == NULL || head->next == NULL)
{
return (NULL);
}
/*
* Traverse the list with slow and fast pointers,
* Until they meet, or reaches end
*/
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
/* If equal there's a loop */
slow = head;
while (slow != fast)
{
/* If not equal, keep checking next pointer until they meet */
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
/* Returns NULL if no loop */
return (NULL);
}
