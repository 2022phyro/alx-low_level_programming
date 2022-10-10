#ifndef DOH_H
#define DOH_H
/**
 * struct dog - defines a new type of struct called dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
