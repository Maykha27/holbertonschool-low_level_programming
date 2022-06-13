#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - check if a letter is upper.
 * @c: the letter of check the code
 * Returns: 1 for upper lettre or 0 for any else
 */
int _isupper(int c)
{
if (c >= 65 && c <= 97)
{
return (0);
}
return (1);
}
