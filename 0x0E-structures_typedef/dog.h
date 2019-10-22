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
void init_dog(struct dog *x, char *name, float age, char *owner);
void print_dog(struct dog *x);
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
