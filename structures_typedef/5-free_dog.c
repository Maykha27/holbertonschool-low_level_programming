#include <stdlib.h>
#include "dog.h"
/**
  *free_dog - initialize a variable of type struct dog
  *@d: dog's details
  *Return: void
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
