#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int s;

	for (s = 0; s <= 10; s++)
	{
		putchar(s + '0');
		s++;
	}
	putchar('\n');
	return (0);
}
