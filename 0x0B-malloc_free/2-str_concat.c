#include <stdio.h>
#include <string.h>

/**
 *
 * _str_concat - concatenates two stings
 * @s1 - first string 
 * @s2 second string
 *
 * Returrns a pointer to s1 and s2 concatenated
 *
 */
char *str_concat(char *s1, char *s`2)
{
	if (!s1) s1 = "";
	if (!s2) s2 = "";

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	char *result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!result) 
		return (NULL);

	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2);
	
	result[len1 + len2] = '\0';

	return (result);

}	
