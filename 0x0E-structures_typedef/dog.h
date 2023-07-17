#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure that defines the user data type
 * @name: parameter for the dog name
 * @age: parameter for the dog age
 * @owner: parameter for the dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
