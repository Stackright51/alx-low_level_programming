#include "main.h"

/**
 * _strcat - concatenates the string pointed to
 * the end of the tring pointed to by @dest
 * @dest: String to be appended
 * @src: String to be concatenated
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index ++)
		dest[dest_len++] = src[index];

	return (dest);
}
