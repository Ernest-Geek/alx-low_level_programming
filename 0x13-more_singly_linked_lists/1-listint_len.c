#include "lists.h"
/**
 * listint_len - Entry point
 * Description: Returns the number of elements in a linked listint_t list.
 * @h: Points to the head node of the list
 *
 * Return: Number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
/**Initialize the counter variable to 0**/
size_t counter = 0;
/**Access the list and count the number of nodes**/
while (h != NULL)
{
counter++;
h = h->next;
}
/**Return the final count**/
return (counter);
}

