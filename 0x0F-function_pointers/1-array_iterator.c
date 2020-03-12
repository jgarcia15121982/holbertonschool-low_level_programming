#include <stdlib.h>
/**
 * array_iterator - Function that executes a function given
 * as a parameter on each element of an array.
 * @array: Array of elenments.
 * @size: size of the array.
 * @action: Pointer to the function to be used.
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
