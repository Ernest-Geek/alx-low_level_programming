#include "lists.h"
/**
 * print_list - Entry point
 * Description: Prints all the elements of list_t list
 * @x: Pointer to head of the list
 * Return: Number of nodes in list
 */
size_t print_list(const list_t *x)
{
size_t count = 0;
while (x)
{
if (x->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", x->len, x->str);
count++;
x = x->next;
}
return (count);
}
