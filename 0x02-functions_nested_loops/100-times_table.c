#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: the number to print the times table for
 *
 * Return: 0
*/
void print_times_table(int n)
{
	int i, j, res;

	if (n < 0 || n > 15)
		return;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j == 0)
					printf("%d", res);
				else if (res < 10)
					printf("   %d", res);
				else if (res < 10)
					printf("  %d", res);
				else
					printf(" %d", res);
			}
			printf("\n");
	}
}

int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);
	return (0);
}
