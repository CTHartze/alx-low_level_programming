#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - allocates free block memory for struct dog
 * @d: refers to struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
