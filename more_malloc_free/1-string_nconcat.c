#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *string_nconcat - function
 *@s2: second str
 *@s1: first str
 *@n: length
 *Return: new pointer allocated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	for (index = 0; s2[index]; index++)
		len++;
	concat = malloc(sizeof(char) * (len));
	if (concat == 0)
		return (0);
	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];
	for (index = 0; s2[index] && index < n+6; index++)
		concat[len++] = s2[index];
	concat[len] = '\0';
	return (concat);
}
