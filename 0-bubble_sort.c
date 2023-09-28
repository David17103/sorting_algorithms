#include "sort.h"

/**
 * bubble_sort - Function that sorts an array of ints
 * using bubble sort algorithm
 *
 * @array: array of ints
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
    int temp;
    size_t i, k;
    int swapped;

    if (!array || !size)
        return;

    for (i = 0; i < size; i++)
    {
        swapped = 0; // Initialize swapped flag for this pass

        for (k = 0; k < size - 1; k++)
        {
            if (array[k] > array[k + 1])
            {
                temp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = temp;
                print_array(array, size);
                swapped = 1; // Set swapped flag if a swap is made
            }
        }

        if (!swapped)
            break; // If no swaps were made, the array is already sorted
    }
}

