#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: The size of the array to
 * @c: The specific char to fill in the array
 *
 * Return: If size == 0 or if it fails - NULL, else a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}