#include <stdio.h>
/**
 * main - Escribe numeros de 0 a 9
 * Return: retorna cero 0
*/
int main(void)
{
	int az;

	for (az = 0; az < 10; az++)
			putchar(az + '0');

	putchar('\n');
	return (0);
}
