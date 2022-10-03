#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
#include <string.h>

/**
 * check_num - check - string 
 * @str: array str
 *
 * Return: 0
 */

int check_num(char *str)

{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	
	{
		if (str[count] < '0' || str[count] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: argument count
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char **argv[])

{
	int count, sum;
	
	sum = 0;

	for (count = 1; count < argc; count++)

	{
		if (check_num(argv[count]) == 0)

		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[count]) <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);

	return (0);
}
