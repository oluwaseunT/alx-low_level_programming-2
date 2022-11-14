/*
 * File: 1-init_dog.c
 * Auth: Muideen A Ilori
 */

#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - intializing dog stuct type variable
 * @d: dog to be initalized
 * @name: name of dog
 * @age: Age of dog
 * @owner: Owner of dog
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
