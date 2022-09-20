#include "main.h"
#include <stdio.h>



/**
 ** print_array - prints n elements of an array of integers
 ** @a: first argument
 ** @n: second argument
 ** Return: 0
 *
 **/

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)

	{
		printf("%d", a[b]);
		if (b != (n - 1))

		{
			printf(", ");
		}

	}

	printf("\n");
}
