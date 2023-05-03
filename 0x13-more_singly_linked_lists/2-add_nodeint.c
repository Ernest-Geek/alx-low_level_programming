#include "lists.h"
/**
 * add_nodeint - Entry point
 * Code Description: Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to pointer to the head node in the list
 * @n: New nod
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_elem;
/**Allocate memory for the new node**/
new_elem = malloc(sizeof(listint_t));
if (!new_elem)
{
return (NULL);
}
/**Initialize a new node with a given value**/
new_elem->n = n;
/**Let the pointer of the new node point to the old node**/
new_elem->next = *head;
/**Now set the pointer tot point to the new node**/
*head = new_elem;
/**Return the address of the new node**/
return (new_elem);
}
