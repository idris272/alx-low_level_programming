#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates arrays of chars 
 * starting with a specific char 
 *
 * Returns a pointer to arrays or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for(i = 0; i < size; i++)
		array[i] = c;

	return (array);

}
