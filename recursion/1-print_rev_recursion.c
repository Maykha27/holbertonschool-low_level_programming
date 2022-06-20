#include"main.h"
/**
  *_print_rev_recursion - the function to print the result at reversed
  *@s: string
  *Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

