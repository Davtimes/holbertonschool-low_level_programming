#include <stdio.h>
/**
 * main - Escribe todo el alfabeto con algunas letras en mayuscula
 * Return: retorna cero 0
*/
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	putchar(az);
	for (az = 'A'; az <= 'Z'; az++)
	putchar(az);
	putchar('\n');
	return (0);
}
