#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
    int total_sum = 0;
    listint_t *current_node = head;

    while (current_node)
    {
            total_sum += (current_node->n * 2);
        current_node = current_node->next;
    }

    return total_sum;
}
