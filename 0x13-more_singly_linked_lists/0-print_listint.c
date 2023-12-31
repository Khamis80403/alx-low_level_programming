#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elemnts in the linkd lists
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t num = 0;
    while (h)
    {
        printf("Element value: %d\n", h->n);
        num++;
        h = h->next;
    }
    printf("Total elements: %lu\n", num);
    return num;
}
