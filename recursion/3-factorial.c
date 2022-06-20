#include"main.h"
/**
  *factorial - the function of the factorial
  *@n: the number
  *Return: n is lower than 0 and -1 to indicateur of erro
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
