#ifndef SORT_H
#define SORT_H

#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 *               Bubble sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size);

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: The size of the array
 */
void print_array(const int *array, size_t size);

/**
 * print_list - Prints a doubly linked list of integers
 * @list: The list to be printed
 */
void print_list(const listint_t *list);

/**
 * swap_node - Swaps a node with its next node in a doubly linked list
 * @node: The node to be swapped
 * @list: The address of the list containing the node
 * @return: The new node at the position of the original node
 */
listint_t *swap_node(listint_t *node, listint_t **list);

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                       order using the Insertion sort algorithm.
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list);

/**
 * selection_sort - Sorts an array of integers in ascending order using the
 *                  Selection sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size);

/**
 * quick_sort - Sorts an array of integers in ascending order using the
 *              Quick sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size);

/**
 * shell_sort - Sorts an array of integers in ascending order using the
 *              Shell sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void shell_sort(int *array, size_t size);

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers in ascending
 *                      order using the Cocktail Shaker sort algorithm.
 * @list: The list to be sorted
 */
void cocktail_sort_list(listint_t **list);

/**
 * counting_sort - Sorts an array of integers using the Counting sort
 *                 algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void counting_sort(int *array, size_t size);

/**
 * merge_sort - Sorts an array of integers in ascending order using the
 *              Merge sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void merge_sort(int *array, size_t size);

/**
 * heap_sort - Sorts an array of integers in ascending order using the
 *             Heap sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void heap_sort(int *array, size_t size);

/**
 * radix_sort - Sorts an array of integers in ascending order using the
 *              Radix sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void radix_sort(int *array, size_t size);

/**
 * bitonic_sort - Sorts an array of integers in ascending order using the
 *                Bitonic sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bitonic_sort(int *array, size_t size);

/**
 * quick_sort_hoare - Sorts an array of integers in ascending order using the
 *                    Hoare partition scheme of the Quick sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void quick_sort_hoare(int *array, size_t size);

#endif /* SORT_H */

