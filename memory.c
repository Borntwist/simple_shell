nclude "shell.h"

/**
 * bfree - free a pointer and NULLs the address
 * @ptr:   the pointer to free be addressed
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
