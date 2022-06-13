#include "main.h"
/**
 * print_most_numbers - check a result
 * Return: void
*/
void print_most_numbers(void)
{
	char x;

	for (x = 0; x <= 9; x++)
	{
		if ((x == '2') || (x == '4'))
			x++;
	_putchar(x);
	}

	_putchar('\n');
}
