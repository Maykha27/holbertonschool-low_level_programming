#include"main.h"
/**
  *_puts -  puts a string to stdout
  *@str: the string of the caracter
  *Return: Always 0
  */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
