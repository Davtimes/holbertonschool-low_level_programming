#include <stdio.h>
/**
 * main - Escribe numeros de 0 a 9 ademas letras de la "a" a la "f" como si fuera hexadecimal
 * Return: retorna cero 0
*/
int main(void)
{
	int az;
    char l;

for (az = 0; az <= 9; az++)
	putchar(az + '0');
for (l = 'a'; l <= 'f'; l++)
	putchar(l);
	putchar('\n');
	return (0);
}
