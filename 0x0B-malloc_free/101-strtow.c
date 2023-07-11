#include "main.h"
#include <string.h>

int getWordsCount(char *str);
void getWordCoordinates(char *str, int startFrom, int *start, int *end);

/**
 * strtow - Function that splits a string into words.
 * @str: String
 * Return: Array of words
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	int numWords = getWordsCount(str);
	char **words = malloc((numWords + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	int wordIndex = 0;
	int start = 0, end = 0;

	for (int i = 0; i < numWords; i++)
	{
		getWordCoordinates(str, start, &start, &end);
		int wordLength = end - start + 1;

		words[wordIndex] = malloc((wordLength + 1) * sizeof(char));

		if (words[wordIndex] == NULL)
		{

			for (int j = 0; j < wordIndex; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}

		strncpy(words[wordIndex], &str[start], wordLength);
		words[wordIndex][wordLength] = '\0';

		start = end + 1;
		wordIndex++;
	}

	words[wordIndex] = NULL;

	return (words);
}

/**
 * getWordsCount - Function that splits a string into words.
 * @str: String
 * Return: words count
 */
int getWordsCount(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			{
				i++;
			}
		} else
		{
			i++;
		}
	}

	return (count);
}

/**
 * getWordCoordinates - Function that splits a string into words.
 * @str: String
 * @startFrom: start from
 * @start: word start
 * @end: word end
 * Return: Nothing
 */
void getWordCoordinates(char *str, int startFrom, int *start, int *end)
{
	int index = startFrom;
	int flag = 0;

	while (str[index] != '\0')
	{
		if (str[index] != ' ' && str[index] != '\t'
				&& str[index] != '\n' && flag == 0)
		{
			*start = index;
			flag = 1;
		} else if ((str[index] == ' ' || str[index] == '\t'
					|| str[index] == '\n') && flag == 1)
		{
			*end = index - 1;
			break;
		}
		index++;
	}

	if (flag == 1 && str[index] == '\0')
	{
		*end = index - 1;
	}
}
