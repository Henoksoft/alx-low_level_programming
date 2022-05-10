/*
 * File: 1-init_dog.c
 * Auth: Brennan D Baraban
 */

#include "dog.h"
#include <stdlib.h>

/**
 * inti_dog - initialize a variable of type struct dog
 * @d: dog's details
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
