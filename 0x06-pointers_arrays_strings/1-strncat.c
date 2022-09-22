#include "main.h"
/**
 * _strncpy - C function that cpoies a string , including the terminating null
 * byte, using at mostan inputted number of bytes.
 * if the length of the strimg is less than themaximum byte number,
 * the remainder of the destination string is filled with null bytes.
 * works identically with standard library 'strncpy'
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of bytes copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
