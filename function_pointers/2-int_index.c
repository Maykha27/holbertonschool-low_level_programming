#include <stdio.h>
#include "function_pointers.h"

/**
  *int_index - a funtion that searches for an integer
  *@array: array to pass
  *@size: number of alaments in the array
  *@cmp: pointer to the function to be used to comparev values
  *Return: void
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (c = 0; c < size; c++)
	{
		if ((*cmp) (array[c]))
		{
			return (c);
		}
	}
	return (-1);
}
