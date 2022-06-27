#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
  *malloc_checked - the fonction
  *@b: size
  *Return: p
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
