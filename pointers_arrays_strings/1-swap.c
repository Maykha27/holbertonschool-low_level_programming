#include"main.h"
#include<stdio.h>
/**
  * swap_int - check the résultat
  * @a: the first variable
  * @b: the second variable
  * Return: a
  */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
