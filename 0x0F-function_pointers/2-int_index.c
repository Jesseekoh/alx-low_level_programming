#include "function_pointers.h"

/**
 * int_index - function that searches for an int
 * @array: array to scan
 * @size: size of array
 * @cmp: pointer to function
 * Return: if no match -1, if match found - index of match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
        int i;

        if (array == NULL || cmp == NULL)
                return (-1);
        if (size <= 0)
                return (-1);
        for (i = 0; i < size; i++)
        {
                if (cmp(array[i]) != 0)
                        return (i);
        }
        return (-1);
}