#include"main.h"
/**
  *_strlen_recursion - the function to print the length of the string
  *@s: the string
  *Return: void
*/
int _strlen_recursion(char *s)
{
	if (s[0] == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
			}

