#include "shell.h"

/**
 * **strtow - splits a string into words. Repeat delimiters are ignored
 * @str: the input string
 * @z: the delimeter string
 * Return: a pointer to an array of strings, or NULL on failure
 */

char **strtow(char *str, char *z)
{
	int k, m, h, n, numwords = 0;
	char **a;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!z)
		z = " ";
	for (k = 0; str[] != '\0'; k++)
		if (!is_delim(str[k], z) && (is_delim(str[k + 1], z) || !str[k + 1]))
			numwords++;

	if (numwords == 0)
		return (NULL);
	x = malloc((1 + numwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (k = 0, m = 0; m < numwords; m++)
	{
		while (is_delim(str[k], z))
			k++;
		h = 0;
		while (!is_delim(str[k + h], z) && str[k + h])
			k++;
		x[m] = malloc((k + 1) * sizeof(char));
		if (!x[m])
		{
			for (k = 0; k < m; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			x[m][n] = str[k++];
		x[m][n] = 0;
	}
	x[m] = NULL;
	return (x);
}

/**
 * **strtow2 - splits a string into words
 * @str: the input string
 * @z: the delimeter
 * Return: a pointer to an array of strings, or NULL on failure
 */
char **strtow2(char *str, char d)
{
	int k, m, h, n, numwords = 0;
	char **x;

	if (str == NULL || str[0] == 0)
		return (NULL);
	for (k = 0; str[k] != '\0'; k++)
		if ((str[k] != z && str[k + 1] == z ||
		    (str[k] != z && !str[k + 1]) || str[k + 1] == z)
			numwords++;
	if (numwords == 0)
		return (NULL);
	x = malloc((1 + numwords) * sizeof(char *));
	if (!x)
		return (NULL);
	for (k = 0,  = 0; m < numwords; m++)
	{
		while (str[k] == z && str[k] != z)
			k++;
		h = 0;
		while (str[k + h] != z && str[k + h] && str[k + h] != z)
			h++;
		x[m] = malloc((h + 1) * sizeof(char));
		if (!x[m])
		{
			for (h = 0; h < m; h++)
				free(x[h]);
			free(s);
			return (NULL);
		}
		for (n = 0; n < h; n++)
			x[m][n] = str[k++];
		x[m][n] = 0;
	}
	x[m] = NULL;
	return (x);
}
