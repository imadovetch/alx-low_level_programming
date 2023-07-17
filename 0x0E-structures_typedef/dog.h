#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Define a dog
 * @name: Dog's name
 * @owner: Dog's owner
 * @age: Dog's age
 *
 * Description: Data structure that stores the name
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
* dog_t - typedef struct dog dog_t
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */

