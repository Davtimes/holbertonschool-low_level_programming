#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - selecciona un numero aleatorio y determina:
 * si es mayor que cero 0
 * si es menor que cero 0
 * si es igual a cero 0
 * Return: retorna cero 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
