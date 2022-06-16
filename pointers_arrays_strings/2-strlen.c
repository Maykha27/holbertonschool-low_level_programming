#include"main.h"
#include<stdio.h>
/**
  * strlen - the length of a string.
  * @s: the charactere
  * Return: a
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;
	return (a);
}

