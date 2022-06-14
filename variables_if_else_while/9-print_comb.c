#include <stdio.h>
/**
 * main - Escribe numeros de 0 a 9 con espacio y coma
 * Return: retorna cero 0
*/
int main(void)
{
	int num;

		for (num = 0; num <= 9; num++)
		{
		putchar(num + '0');
		if (num < 9)
		{
		putchar(',');
		putchar(' ');
		}
		}
		putchar('\n');

	return (0);
}
