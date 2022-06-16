#include"main.h"
/**
  *print_rev - prints a string, in reverse
  *@s: input to reverse
  *Retenu: Alwways O
  */
void print_rev(char *s)
{
	char rev = s[0];
		int a = 0;
		int b;

		while (s[a] != '\0')
			a++;

		for (b = 0; b < a; a++)
		{
			a--;
			rev = s[b];
			s[b] = s[a];
			s[a] = rev;
		}
}
