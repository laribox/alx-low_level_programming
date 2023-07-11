#include "main.h"

/**
 * argstostr - Function  function that concatenates all
 * the arguments of your program.
 * @ac: Number of argumrnts
 * @av: Array of arguments
 * Return: String pointer
 */

char *argstostr(int ac, char **av)
{
	int i, len = 0, temp = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		temp = 0;
		while (av[i][temp] != '\0')
		{
			temp++;
			len++;
		}
		len++;
	}
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac ; i++)
	{
		temp = 0;
		while (av[i][temp] != '\0')
		{
			result[len] = av[i][temp];
			temp++;
			len++;
		}

		result[len++] = '\n';
	}
	result[len] = '\0';

	return (result);
}
