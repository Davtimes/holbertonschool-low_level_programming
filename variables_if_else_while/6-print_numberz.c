#include <stdio.h>
/**
 * main - Escribe numeros de 0 a 9
 * Return: retorna cero 0
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');

	putchar('\n');

	return (0);
}
