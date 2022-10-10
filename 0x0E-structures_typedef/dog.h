#ifndef STRTYP
#define STRTYP

/**
 * struct dog - struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: the struct is for dog
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;

#endif /*STRTYP*/
