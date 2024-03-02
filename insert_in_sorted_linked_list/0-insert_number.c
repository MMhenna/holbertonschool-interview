#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert node in sorted linked list
 * @head: pointer to head of list
 * Return: new node
 */

listint_t *insert_node(listint_t **head, int number)
{
    listint_t *node;
    listint_t *current;
    listint_t *prev = NULL;

    node = malloc(sizeof(listint_t));
    if (node == NULL)
        return NULL;

    node->n = number;
    node->next = NULL;

    current = *head;

    while (current != NULL && current->n < number)
    {
        prev = current;
        current = current->next;
    }

    if (prev == NULL)
    {
        node->next = *head;
        *head = node;
    }
    else
    {
        node->next = current;
        prev->next = node;
    }

    return (node);
}