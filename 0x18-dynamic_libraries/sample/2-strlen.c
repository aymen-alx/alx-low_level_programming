#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strlen - return length of a string
 * @s: pointer
 * Return: length of a string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
