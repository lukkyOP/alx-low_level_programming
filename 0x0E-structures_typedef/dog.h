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
	struct dog my_dog;

	my_dog.name = "lucky";
	my_dog.age = 3;
	my_dog.owner = "Tom";

	return (0);
}
#endif
