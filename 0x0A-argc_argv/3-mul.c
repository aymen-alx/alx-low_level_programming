#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
* @argc: arguments size
* @argv:array of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
