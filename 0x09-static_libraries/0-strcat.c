#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates the string pointed to by @src
 * to the end othe stringpointed by @dest
 * @dest: String that will be appended
 * @src: String to concatenated upon
 *
 *Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	dest_len = strlen(dest);

	for (index = 0; src[index] != '\0'; index++)
		dest[dest_len + index] = src[index];

	return (dest);
}
