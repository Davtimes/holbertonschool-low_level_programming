#include <stdio.h>
/**
 * main - Escribe numeros de 0 a 9
 * Return: retorna cero 0
*/
int main(void)
{
	int i;
	char l;

	i = 48;
	while  (i < 58)
	{
		putchar(i);
		i++;
	}

	l = 'a';
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
