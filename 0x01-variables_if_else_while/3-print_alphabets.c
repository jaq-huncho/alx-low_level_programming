#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char l;
	char h;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (h = 'A'; l <= 'Z'; h++)
		putchar(h);
	putchar('\n');
	return (0);
}
