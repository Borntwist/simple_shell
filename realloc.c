nclude "shell.h"

/**
 **_memset - fills memory with a constant byte
 *@x: the pointer to the memory area
 *@y: the byte to fill *s with
 *@z: the amount of bytes to be filled
 *Return: (s) a pointer to the memory area s
 */
char *_memset(char *x, char y, unsigned int z)
{
	unsigned int k;

	for (k = 0; k < z; k++)
		x[k] = y;
	return (x);
}

/**
 * ffree - frees a string of strings
 * @mm: string of strings
 */
void ffree(char **mm)
{
	char **d = mm;

	if (!mm)
		return;
	while (mm)
		free(*mm++);
	free(d);
}

/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to previous malloc'ated block
 * @old_size: byte size of previous block
 * @new_size: byte size of new block
 *
 * Return: pointer to da ol'block nameen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *m;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	m = malloc(new_size);
	if (!m)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		m[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (m);
}
