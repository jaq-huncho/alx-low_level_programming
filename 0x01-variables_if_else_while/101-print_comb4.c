#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, h, l;

	for (a = 0; a < 8; a++)
	{
		for (h = a + 1; h < 9; h++)
		{
			for (l = h + 1; l < 10; l++)
			{
				putchar((a % 10) + '0');
				putchar((h % 10) + '0');
				putchar((l % 10) + '0');

				if (a == 7 && h == 8 && l == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

