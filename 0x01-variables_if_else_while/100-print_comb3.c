#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, c;

	for (a = 0; a < 9; a++)
	{
		for (c =  1; c < 10; c++)
		{
			putchar((a % 10) + '0');
			putchar((c % 10) + '0');

			if (a == 8 && c == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
