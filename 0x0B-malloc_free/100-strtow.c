#include <stdlib.h>

int n_words(char *str, int pos);
char *get_word(char *str, int *pos);
char *_memcpy(char *dest, char *src, unsigned int n);
void free_list(char **list, int n_strings);

/**
 * strtow - Splits a string into words
 * @str: String to split
 *
 * Description: Splits a string into words that are separetad
 * by spaces
 *
 * Return: A pointer to an array of strings
 *            - Each element of the array contains a word
 *            - The last element of the returned array should be NULL
 * NULL if str == NULL or str == ""
 * NULL if fails the allocation
 */

char **strtow(char *str)
{
	int nw;
	char **lw;
	int i, j, *pj;

	if (str == NULL || *str == '\0')
		return (NULL);

	nw = n_words(str, 0);
	if (nw == 0)
		return (NULL);

	lw = (char **)malloc((nw + 1) * sizeof(char *));

	if (lw == NULL)
		return (NULL);

	pj = &j;
	*pj = 0;
	for (i = 0; i < nw; i++)
	{
		str = get_word(str, pj);
		lw[i] = (char *)malloc((*pj + 1) * sizeof(char));
		if (lw[i] == NULL)
		{
			free_list(lw, i);
			return (NULL);
		}
		lw[i] = _memcpy(lw[i], str, *pj);
		lw[i][*pj] = '\0';
		str = str + *pj;
		*pj = 0;
	}
	lw[i] = NULL;

	return (lw);
}

/**
 * n_words - Returns the number of words that are present in a string
 * The words should be separated by spaces.
 * @str: String to calculate the number of words
 * @pos: The actual position of the string
 *
 * Return: The number of words separated by spaces
 */
int n_words(char *str, int pos)
{
	if (*str != '\0')
	{
		if (pos == 0 && *str != ' ')
			return (1 + n_words(str + 1, pos + 1));
		if (*str == ' ')
			return (n_words(str + 1, pos + 1));
		if (*(str - 1) == ' ' && *str != ' ')
			return (1 + n_words(str + 1, pos + 1));
		if (*str != ' ')
			return (n_words(str + 1, pos + 1));
	}
	return (0);
}

/**
 * get_word - Changes the paramaters inserted for the position where a
 * word can be found
 * @str: The string where to found the next word
 * @pos: Pointer to a integer where the length of the word is allocated
 *
 * Return: Nothing
 */
char *get_word(char *str, int *pos)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (*str == ' ' && i == 0)
		{
			str++;
			continue;
		}

		if (str[i] != ' ')
			i++;
		else
			break;
	}
	*pos = i;
	return (str);
}

/**
 * _memcpy - copies the memory from src to dest
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: bytes to use from src
 *
 * Return: The pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}

/**
 * free_list - Frees an array of strings
 * @list: Pointer to array to free
 * @n_strings: Number of strings defined inside the array
 *
 * Return: Nothing
 */
void free_list(char **list, int n_strings)
{
	int i;

	for (i = 0; i < n_strings; i++)
		free(list[i]);

	free(list);
}
