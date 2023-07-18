#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Description: dog struct decalaration
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
