#include <stdio.h>
/**
 * main - Entry points
 * Description: 'program prints all possible combinations of number'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
		return (0);
}
