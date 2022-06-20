#include"main.h"
/**
  *_pow_recursion - the fuction of the power
  *@x: the value
  *@y: the power
  *Return: the value x power y
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (_pow_recursion(x, y + 1) / x);
	}
	return (_pow_recursion(x, y - 1) * x);
}

