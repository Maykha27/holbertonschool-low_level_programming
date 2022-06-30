#include "function_pointers.h"
/**
  *array_iterator - execute a funtion
  *@array: array to pass
  *@action: pointer to the function we need to use
  *@size: size of the array
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array && action != NULL)
	{
		for (c = 0; c < size; c++)
		{
			(action) (array[c]);
		}
	}
}
