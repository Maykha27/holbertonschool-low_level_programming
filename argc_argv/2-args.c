#include "main.h"
#include <stdio.h>
/**
  *main - print all arguments it receives
  *@argc: count
  *@argv: vector
  *Return: void
  */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
