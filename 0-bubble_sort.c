#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble sort algorithm.
 * @array: Array of numbers to be sorted
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t k, pass;
    int numb;

    if (array == NULL || size < 2)
        return;

    for (pass = 0; pass < size - 1; pass++)
    {
        for (k = 0; k < size - pass - 1; k++)
        {
            if (array[k] > array[k + 1])
            {
                /* Swap elements */
                numb = array[k];
                array[k] = array[k + 1];
                array[k + 1] = numb;

                /* Print the current array state */
                print_array(array, size);
            }
        }
    }
}

