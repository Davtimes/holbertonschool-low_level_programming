#include <stdio.h>
/**
 * main - Escribe numeros de 0 a 9
 * Return: retorna cero 0
*/
int main(void)
{
	char az;


for (az = 0; az <= 9; az++)
	putchar(az + '0');
for (az = 'a'; az <= 'f'; az++)
	putchar(az);
	putchar('\n');
	return (0);
}
