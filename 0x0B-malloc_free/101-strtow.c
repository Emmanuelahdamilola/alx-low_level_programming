#include "main.h"
#include <stdlib.h>

void create_word(char **words, char *str, int start, int end, int index);
void util(char **words, char *str);

/**
 * strtow -  function that splits a string into words
 * @str: string pointer
 * Return: Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */
char **strtow(char *str)
{
	int index, flag, length;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	index = flag = length = 0;
	while (str[index])
	{
		if (flag == 0 && str[index] != ' ')
			flag = 1;
		if (index > 0 && str[index] == ' ' && str[index - 1] != ' ')
		{
			flag = 0;
			length++;
		}
		index++;
	}
	length += flag == 1 ? 1 : 0;
	if (length == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (length + 1));
	if (words == NULL)
		return (NULL);
	util(words, str);
	words[length] = NULL;
	return (words);
}
/**
* util - function for fetching words into an array
* @words:strings array
* @str: string
*/
void util(char **words, char *str)
{
	int index, j, start, flag;

	index = j = flag = 0;
	while (str[index])
	{
		if (flag == 0 && str[index] != ' ')
		{
			start = index;
			flag = 1;
		}
		if (index > 0 && str[index] == ' ' && str[index - 1] != ' ')
		{
			create_word(words, str, start, index, j);
			j++;
			flag = 0;
		}
		index++;
	}
	if (flag == 1)
		create_word(words, str, start, index, j);
}

/**
* create_word - function that creates a word and insert it into the array
* @words: array of strings
* @str: the string
* @start:starting index of the word
* @end: stopping index of the word
* @index: the index of the array to insert the word
*/
void create_word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));
	for (j = 0; start < end; start++, j++)
		words[index][j] = str[start];
	words[index][j] = '\0';
}
