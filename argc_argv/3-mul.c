#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *main - print that the multiplicateur
  *@argc: count
  *@argv: vector
  *Return: output
  */
int main(int argc, char **argv)
{
	int i;
	int j;
	int result;

	if (argc != 3)
	{
	printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		result = i * j;

		printf("%d\n", result);
	}
	return (0);
}
