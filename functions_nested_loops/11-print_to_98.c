#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Imprime todos los numeros hasta 98
 * @n: Condicional desde contador
 *
 * Return: Vacio
 */
void print_to_98(int n)
{
if (n < 98)
	{
	for (; n < 98; n++)
		{
		printf("%d, ", n);
		}
	}
if (n > 98)
	{
	for (; n > 98; n--)
		{
		printf("%d, ", n);
		}
	}
printf("98\n");
}
