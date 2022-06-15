#include "main.h"
/**
 * print_alphabet_x10 - Imprime el alfabeto 10 veces
 *
 * Return: retorna 0
 */

void print_alphabet_x10(void)
	{
	int n;

	for (n = 0; n < 10; n++)
	{
	print_alphabet();
	}
	}
void print_alphabet(void)
{

	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);

	_putchar('\n');
}
