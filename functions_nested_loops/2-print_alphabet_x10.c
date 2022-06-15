#include "main.h"
/**
 * print_alphabet_x10 - Ciclo que repite la funcion print_alphabet 10 veces
 * print_alphabet - Imprime el alfabeto
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
