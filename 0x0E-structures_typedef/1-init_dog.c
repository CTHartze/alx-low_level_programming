#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize dog type struct variable
 * @d: initialize dog struct
 * @name: initialize name pointer
 * @age: initialize age pointer
 * @owner: initialize owner pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
