#include"main.h"
/**
  *puts_half -  function that prints half of a string
  *@str: string to half & print
  *Return: always void
  */
void puts_half(char *str)
{
	int a, b = 0;

	while (*(str + a) != '\0')
		a++;
	if (!(a % 2))
	b = (a - 1) / 2;
	else
	b = a / 2;
	a++;
	while (b < a)
	_putchar(*(str + a++));
	_putchar('\n');
}
