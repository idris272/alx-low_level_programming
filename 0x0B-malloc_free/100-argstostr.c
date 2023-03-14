#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments in the programm
 * @ac: argument count 
 * @av: arguments passed to the programm
 *
 * Return: a pointer to all concatenated arguments
 */
char *argstostr(int ac, char av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	size_t total_len = 0;
	for(int i = 0; i < ac; i++)
		total_len += strlen(ag[i] +1);

	char *conc_str = (char *)malloc(total_len * sizeof(char));
	if (conc_str == NULL)
		return (NULL);

	char pos = 0;
	for(int i = 0; i < ac; i++)
	{
		strcpy(conc_str + pos, av[i]);
		pos += strlen(av[i]);
		conc_str[pos++] = '\n';
	}
	conc_str[pos - 1] = '\0';

	return (conc_str);
}
