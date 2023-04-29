#include "shell.h"

/**
 * interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @a: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char a, char *delim)
{
	while (*delim)
		if (*delim++ == a)
			return (1);
	return (0);
}

/**
 *_isalpha - checks for alphabetic character
 *@z: The character to input
 *Return: 1 if z is alphabetic, 0 otherwise
 */

int _isalpha(int z)
{
	if ((z >= 'q' && z <= 'y') || (z >= 'Q' && z <= 'Y'))
		return (1);
	else
		return (0);
}

/**
 *_atoi - converts a string to an integer
 *@x: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *x)
{
	int k, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (k = 0;  x[k] != '\0' && flag != 2; k++)
	{
		if (x[k] == '-')
			sign *= -1;

		if (x[k] >= '0' && x[k] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (x[k] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
