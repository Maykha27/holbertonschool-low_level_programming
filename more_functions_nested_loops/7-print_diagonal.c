#include "main.h"
/**
 *print_diagonal - check the résult
 *@n: the number
 */
void print_diagonal(int n)
{
	int x;
	int y;
if (n > 0)
{
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');
		_putchar('\\');
		if (x == n - 1)
			continue;
		_putchar('\n');
	}
}
_putchar('\n');
}
