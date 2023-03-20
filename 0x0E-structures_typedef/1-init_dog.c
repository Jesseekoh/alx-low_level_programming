#include "dog.h"

/**
  * init_dog - initializes a variable of type struct dog
  * @d: dog
  * @name: dogs name
  * @age: dog's age
  * @owner: owner of dog
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
