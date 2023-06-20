#ifndef MYDOG_H
#define MYDOG_H
/**
 * struct dog - Structure representing a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
#endif
