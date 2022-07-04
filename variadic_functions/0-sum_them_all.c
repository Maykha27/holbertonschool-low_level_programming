#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  *sum_them_all - the summe of all its parameters.
  *@n: nombre d'argument
  *Return: argumrnt
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
		int sum;
		va_list list;

		va_start(list, n);
		for (i = 0, sum = 0; i < n; i++)
			sum += va_arg(list, int);

		va_end(list);

		return (sum);
}

