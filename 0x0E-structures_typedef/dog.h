#ifndef DOG_H
#define DOG_H
/**
 * struct dog - The structure defination of dog.
 * @name: The name of that dog.
 * @age: How old the dog is.
 * @owner: The name of the proprietor of the dog.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
