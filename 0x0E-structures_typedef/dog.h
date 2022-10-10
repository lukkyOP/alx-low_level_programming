#ifndef DOG_H
#define DOH_H

/**
 * struct dog - struct dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: This struct is for dog
 */

struct dog {
	char *name;
	float age;
	char *owner;
}
{
int main(void)
	struct dog dog_t;

	my_dog.name = "lucky";
	my_dog.age = 3;
	my_dog.owner = "Tom";

	return (0);
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
