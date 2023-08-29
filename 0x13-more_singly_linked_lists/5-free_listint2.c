#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
    listint_t *current_node; // Renamed the variable for clarity

    if (head == NULL)
        return;

    while (*head)
    {
        current_node = (*head)->next;
        free(*head);

        // Added a print statement for visualization
        printf("Freed a node's memory\n");

        *head = current_node;
    }

    *head = NULL;
}
