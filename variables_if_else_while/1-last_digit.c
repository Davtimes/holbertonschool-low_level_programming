#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - selecciona un numero aleatorio y determina:
 * El ultimo numero al cual determina:
 * si es menor que cero 0
 * si es igual a cero 0
 * Return: retorna cero 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
