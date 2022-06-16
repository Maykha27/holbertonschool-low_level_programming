#include"main.h"
/**
  * puts2 - prints alternate
  *@str: string to alternate
  * Rturn: always void
  */
void puts2(char *str)
{
	int a = 0;

	while (*str)
	{
		if (a++ % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
