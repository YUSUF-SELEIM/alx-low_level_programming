#include "main.h"

/**
 * swap_int - swaps values of to ints
 * @a: pointer to the first var
 * @b: pointer to the second var
 */
void swap_int(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
