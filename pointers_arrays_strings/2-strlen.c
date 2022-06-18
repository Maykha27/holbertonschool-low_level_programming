#include"main.h"
#include<stdio.h>
/**
  * _strlen - the length of a string.
  * @s: string passed ti function
  * Return: a
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;
	return (a);
}

