#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *op_add - function addition
  *@a: first num
  *@b: two num
  *
  *Return: void
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - function subvention
  *@a:...
  *@b:...
  *Return:..
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - ...
 * @a: ...
 * @b: ...
 *
 * Return: ...
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  *op_div - function division
  *@a:...
  *@b:....
  *Return:...
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  *op_mod - function modulo
  *@a:...
  *@b:....
  *Return:...
  */
int op_mod(int a, int b)
{
	if (b == 0 || a == 0)
	{
		printf("\n");
		exit(100);
	}
	return (a % b);
}
