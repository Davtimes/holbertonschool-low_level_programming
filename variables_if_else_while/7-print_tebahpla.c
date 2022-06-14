#include <stdio.h>
/**
 * main - Escribe todo el alfabeto al revez
 * Return: retorna cero 0
*/
int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
	putchar(az);
	putchar('\n');
	return (0);
}
