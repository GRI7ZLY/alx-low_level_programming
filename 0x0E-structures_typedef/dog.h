<<<<<<< HEAD
#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
*struct dog - a new type of data
*representing a dog
*@name: name of dog
*@age: age of dog
*@owner: owner's name
*/
struct dog
{
char *name;
float age;
char *owner;
};


/**
*dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;


=======
#ifndef STRUCTS
#define STRUCTS
/**
 * struct dog - description for a pet
 * @name: pet name
 * @age: pet age
 * @owner: owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
int _putchar(char c);
>>>>>>> 271fdb3fd8a95fe6acd6ae74edeccc050357ef47
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
<<<<<<< HEAD
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

=======
>>>>>>> 271fdb3fd8a95fe6acd6ae74edeccc050357ef47
#endif
