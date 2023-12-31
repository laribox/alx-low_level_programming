#include <stdlib.h>
#include "dog.h"


/**
 * _strlen - get the length of a string
 * @s: string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * _strcpy - copy the string pointed to by src
 * including the terminating null byte (\0)
 * @dest: pointer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int  i;

	for (i = 0; i < (int)_strlen(src); i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - is a function that initializes a variable
 * @name: is a pointer to a char array
 * @age: is an integer value
 * @owner: is a pointer to a char array
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
