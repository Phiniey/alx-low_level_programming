#ifndef DOG_H
#define DOG_H
/**
 * struct dog - The structure defination of dog.
 * @name: The name of that dog.
 * @age: How old the dog is.
 * @owner: The name of the proprietor of the dog.
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
