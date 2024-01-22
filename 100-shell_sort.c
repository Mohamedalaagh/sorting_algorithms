#include "sort.h"

/**
 * shell_sort - Sorting an Array using shell sort
 * @array: Array of integers
 * @size: Array size
 **/
void shell_sort(int *array, size_t size)
{
    unsigned int g = 1, i, j;
    int tmp;

    if (array == NULL)
        return;
    if (size < 2)
        return;

    while (g < size / 3)
        g = g * 3 + 1;

    while (g > 0)
    {
        for (i = g; i < size; i++)
        {
            tmp = array[i];
            j = i;

            while (j >= g && array[j - g] > tmp)
            {
                array[j] = array[j - g];
                j -= g;
            }

            array[j] = tmp;
        }

        print_array(array, size);
        g /= 3;
    }
}

