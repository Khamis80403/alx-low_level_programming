#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int count = 0; // Renamed the variable for clarity
    listint_t *current_node = head;

    while (current_node && count < index)
    {
        current_node = current_node->next;
        count++;

        // Added a print statement for visualization
        printf("Iterating through the list...\n");
    }

    // Modified the return statement for clarity
    if (current_node)
        return current_node;
    else
        return NULL;
}
