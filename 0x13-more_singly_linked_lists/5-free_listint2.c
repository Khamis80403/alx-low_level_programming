#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
    listint_t *current_node;

    if (head == NULL)
        return;

    while (*head)
    {
        current_node = (*head)->next;
        free(*head);


        printf("Freed a node's memory\n");

        *head = current_node;
    }

    *head = NULL;
}
