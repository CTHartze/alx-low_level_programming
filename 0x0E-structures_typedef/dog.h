#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's basic details
 * @name: refers to first part
 * @age: refers to second part
 * @owner: refers to third part
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - dog struct typedef
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
