#include "sort.h"
/**
 * partition- quick sort algorithm
 * @array: array
 * @first: first
 * @last: last;
 * @size: size
 * Return: sorted array
 */
int partition(int *array, int first, int last, size_t size)
{
    int pivot = array[last];
    int i = first;
    int temp;
    int j;

    for (j = first; j <= last; j++)
    {
        if(pivot > array[j])
        {
            
            temp = array[j];
            array[j] = array[i];
            array[i] = temp;
            print_array(array, size);

            i++;
            
        }
    }
    temp = array[last];
    array[last] = array[i];
    array[i] = temp;

    return(i);
}
/**
 * myquicksort -  quick sort algorithm
 *
 * @array: data to sort
 * @first: left pivote
 * @last: right pivote
 * @size: size input
 * Return: No Return
 */
void myquicksort(int *array, int first, int last, size_t size)
{
    int position;

    if (first < last)
    {
        position = partition(array, first, last, size);
        myquicksort(array, first, position - 1, size);
        myquicksort(array, position + 1, last, size);
    }




}
/**
 * quick_sort- quick sort algorithm
 * @array: array
 * @size: size
 * Return: sorted array
 */
void quick_sort(int *array, size_t size)
{
    if (size < 2)
    {
        return;
    }

    myquicksort(array, 0, size - 1, size);

    

    
}

