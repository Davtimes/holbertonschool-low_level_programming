#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Escribe todo el alfabeto
 * Return: retorna cero 0
*/
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	putchar(az);
	putchar('\n');
	return (0);
}	
