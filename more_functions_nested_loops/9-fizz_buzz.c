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
			printf("FIZZBUZZ");
		else if ((i % 3) == 0)
			printf("FIZZ");
		else if ((i % 5) == 0)
			printf("BUZZ");
		else
			printf("%d ", i);
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
