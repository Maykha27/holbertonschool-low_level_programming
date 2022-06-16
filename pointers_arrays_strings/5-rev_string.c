#include"main.h"
/**
  * rev_string - a function that reservea string
  * @s: imput to reserve
  * Return: string and in reserve
  */
void rev_string(char *s)
{
	char rev = s[0];
	int a = 0;
	int i;

	while (s[a] != '\0')
		a++;
	for (i = 0; i < a; a++)
	{
		a--;
		rev = s[i];
		s[i] = s[a];
		s[a] = rev;
	}
}
