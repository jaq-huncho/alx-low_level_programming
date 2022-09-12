#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, c;

	for  (a = 0; a <= 9; a++)
	{
		for (c = 1; c <= 9; c++)
		{
			putchar(a + '0');
			putchar(c + '1');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
