#include "lists.h"
/**
 * find_list_loop - Finds the first node in a looped linked list
 * @head: Pointer to the head node of the linked list
 * @start: Pointer to a node in the linked list to start searching from
 * Return: If a loop is found, returns a pointer to the first node in the loop.
 * Otherwise, returns NULL.
 */
listint_t *find_list_loop(listint_t *start)
{
listint_t *slow = start;
listint_t *fast = start;
/* Check if list is NULL, or just an element */
if (start == NULL || start->next == NULL)
{
return (NULL);
}
/*
* Traverse the list with slow and fast pointers,
* Until they meet or fast pointer reaches end
*/
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
/* If equal there's a loop */
slow = start;
while (slow != fast)
{
/* If not equal, keep check next pointer until they meet */
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
/* Returns NULL if no loop */
return (NULL);
}
