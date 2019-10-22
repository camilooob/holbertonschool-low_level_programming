#ifndef DOG_H
#define DOG_H
/**
  * struct dog - create dog.
  * @name: name of dog.
  * @age: age of dog.
  * @owner: owner of dog.
  * Return: 0
  */
struct dog
{
char *name;
float age;
char *owner;
};
#endif
void init_dog(struct dog *x, char *name, float age, char *owner)
