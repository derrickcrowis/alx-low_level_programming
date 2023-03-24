#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * followed by a new line.
 * @n: An input integer
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
		}
	}
	else
		_putchar('\n');
}
	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
