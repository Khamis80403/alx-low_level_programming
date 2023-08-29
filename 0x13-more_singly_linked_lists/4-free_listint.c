#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
    listint_t *current_node; // Renamed the variable for clarity

    while (head)
    {
        current_node = head->next;
        free(head);

        // Added a print statement for visualization
        printf("Freed a node's memory\n");

        head = current_node;
    }
}
