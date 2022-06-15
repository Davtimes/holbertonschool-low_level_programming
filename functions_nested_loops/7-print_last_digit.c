#include "main.h"
/**
 * print_last_digit - IMprime el ultimo digito de un numero
 * @n: variable a condicionar
 * Return: 0
 */

int print_last_digit(int n)
{
	n = n % 10;

		if (n < 0)
		{
			n = -n;
		}
	_putchar(n + '0');
		return (n);
}