#include "sort.h"
/**
 * insertion_sort- quick sort algorithm
 * @array: array
 * @size: size
 * Return: sorted array
 */
void swap(int *array, int position1, int position2)
{
    int temp = array[position1];

    array[position1] = array[position2];
    array[position2] = temp;
}

/**
 * insertion_sort- quick sort algorithm
 * @array: array
 * @size: size
 * Return: sorted array
 */
void quick_sort(int *array, size_t size)
{   
    size_t first, mover, pivot;
    pivot = array[size - 1];
    first = array[0 - 1];

        for (mover = 0; mover <= pivot - 1; mover++)
        {
            if(array[mover] <= array[pivot])
            {
                first++;
                swap(array, first, mover);
                print_array(array, size);
            }
        }    
        swap(array, [first + 1, pivot);
        print_array(array, size);
        

}



