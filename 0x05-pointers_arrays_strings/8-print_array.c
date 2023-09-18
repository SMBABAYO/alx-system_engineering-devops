#include "main.h"

/**
* print_array - print the n elements of an array of integers
* @a: array to used
* @n: number of an element to print
* Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
