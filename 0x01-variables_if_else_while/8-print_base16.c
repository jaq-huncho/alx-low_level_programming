#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	int k;

	i = 10;
	k = 'a';

	while
		(i < 10) {
			putchar(i + '0');
			i++;
		}
	while
		(k <= 'f') {
			putchar(k);
			k++;
		}
	putchar('\n');
	return (0);
}
