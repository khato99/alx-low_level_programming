#include "main.h"

/**
 * reverse_array - funtion that reverse content of array
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i, rel;

	for (i = 0; i < n; i++)
	{
		n--;
		rel = a[i];
		a[i] = a[n];
		a[n] = rel;
	}
}
