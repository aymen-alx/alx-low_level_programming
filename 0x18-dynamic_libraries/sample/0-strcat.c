#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: pointer destination
* @src: pointer source
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j = -1;

	for (i = 0; dest[i] != '\0'; i++)
	;

	do {
		j++;
		dest[i] = src[j];
		i++;
	} while (src[j] != '\0');

	return (dest);
}
