#include <stdio.h>
/**
 * main - Escribe todo el alfabeto sin las letras e y q
 * Return: retorna cero 0
*/
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	if (az != 'e' && az != 'q')
	putchar(az);
	putchar('\n');
	return (0);
}
