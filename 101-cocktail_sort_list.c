#include "sort.h"

/* Function prototype */
void swap_node(listint_t **list, listint_t *node1, listint_t *node2);

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers
 *                      in ascending order using Cocktail shaker sort
 * @list: Pointer to a pointer to the head of the list
 */
void cocktail_sort_list(listint_t **list)
{
    listint_t *current = *list;
    int swapped;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    do {
        swapped = 0;

        while (current->next != NULL) {
            if (current->n > current->next->n) {
                swap_node(list, current, current->next);
                print_list(*list);
                swapped = 1;
            }
            else
                current = current->next;
        }

        if (swapped == 0)
            break;

        swapped = 0;

        while (current->prev != NULL) {
            if (current->n < current->prev->n) {
                swap_node(list, current->prev, current);
                print_list(*list);
                swapped = 1;
            }
            else
                current = current->prev;
        }

    } while (swapped);
}

/**
 * swap_node - Swaps two nodes in a doubly linked list
 * @list: Pointer to a pointer to the head of the list
 * @node1: First node to swap
 * @node2: Second node to swap
 */
void swap_node(listint_t **list, listint_t *node1, listint_t *node2)
{
    if (node1->prev != NULL)
        node1->prev->next = node2;
    else
        *list = node2;

    if (node2->next != NULL)
        node2->next->prev = node1;

    node1->next = node2->next;
    node2->prev = node1->prev;

    node1->prev = node2;
    node2->next = node1;
}

