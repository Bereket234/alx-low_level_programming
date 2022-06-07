#include "holberton.h"

int _putchar(char c);

/**
 * print_times_table - print the times table until n
 *
 * @n: n times table
 *
 * Return: No return
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n >= 0 && n <= 15)
	{

		for (i = 0; i <= n; i++)
		{

			for (j = 0; j <= n; j++)
			{
				_putchar(i*j);
			}
			_putchar(',');
		}

	}

}

int main (void){
	print_times_tale(3);
	_putchar('\n');
	print_times_tale(5);
	_putchar('\n');
	print_times_tale(98);
	_putchar('\n');
	print_times_tale(12);

	return (0)
}

