#include"main.h"
/**
  *_sqrt_recursion - chech the résult
  *@n: a natural square
  *
  *Return: n
  */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_aux(n, 0));
}
/**
  *_sqrt_recursion_aux - function auxiliar
  *@n: input
  *@x: input
  *Return: output
  */
int _sqrt_recursion_aux(int n, int x)
{
	if (x * x ==  n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_aux(n, x + 1));
}
