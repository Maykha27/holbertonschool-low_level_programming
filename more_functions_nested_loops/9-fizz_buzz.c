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
		if (i % 3 == 0)
			printf("FIZZ ");
		else if (i % 5 == 0)
			printf("BUZZ ");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FIZZBUZZ ");
		else
			printf("%d ", i);
	}
		printf("\n");
		return (0);
}
