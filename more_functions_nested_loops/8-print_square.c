#include "main.h"
/**
  *print_square - a function that prints a square
  *@size: the size of the square
  *Return: Always(0)
  */
void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');
			if (a == b - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
