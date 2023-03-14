#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate 
 * of str
 *
 * Returns NULL if str is empty, NULL if failed to create memory
 * or returns a pointer.
 *
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *dup_str = (char *)malloc((strlen(str) + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	strcpy(dup_str, str);
	
	return (dup_str);

}
