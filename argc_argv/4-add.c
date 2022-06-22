#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
  *main - program that adds positive number
  *@argc: count
  *@argv: vector
  *Return: void
  */
int main(int argc, char **argv)
{
	int i;
	int j;
	int number;
	int sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		number = atoi(argv[i]);
		sum += number;
	}
	printf("%d\n", sum);
	return (0);
}
printf("0\n");
return (0);
}
