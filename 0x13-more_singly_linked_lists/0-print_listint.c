#include "lists.h"
/**
 * print_listint - Entry point
 * code description: Prints all the elements of a listint_t list.
 * @h: Pointer to the first node in the list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
/**Counting the number of nodes**/
size_t count = 0;
const listint_t *nodePtr = h;
/**Iterate through the list while the count node is NULL**/
while (nodePtr != NULL)
{
printf("%d\n", nodePtr->n);
count++;
nodePtr = nodePtr->next;
}
return (count);
}
