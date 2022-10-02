#include "main.h"

/**
 * infinite_add - add 2 integers.
 * @n1: integer
 * @n2: integer
 * @r: buffer
 * size_r: size of r
 * Return: char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--; size_r++)
	{
		num = *(n1 - '0') + tens; 
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--;  size_r--)
	{
		num = (*n2 - '0') + tens; 
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10; 
	}
	
}
