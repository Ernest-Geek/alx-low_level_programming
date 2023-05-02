#include "lists.h"
#include <stddef.h>
/**print_listint - prints all the elements of a listint_t list
 * $h: pointer to head of list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
/**Initialize node counter**/
size_t count = 0;
/**Traverse the list and print each node**/
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
