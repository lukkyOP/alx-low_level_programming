#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point
 *
 * Return: Always 0
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
