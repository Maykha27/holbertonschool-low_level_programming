#include "main.h"
#include <stdio.h>
/**
  * main - FizzBuzz For numbers which are multiples
  * of both three and five print
  * Return: Always (0)
  */
int main(void)
{
int i;

	for (i = 1; i <= 100; ++i)
	{
		if ((i % 15) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else ((i % 5) == 0)
			printf("Buzz");

		}
	printf("\n");
	return (0);
}