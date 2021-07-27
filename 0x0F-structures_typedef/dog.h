#ifndef _DOG_H_
#define _DOG_H_
/**
* struct dog - describes the dog
*
* @name: name of dog
* @age: age of the dog
* @owner: owner of the dog
*
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
