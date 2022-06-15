#include "main.h"
/**
 * print_alphabet_x10 - Imprime el alfabeto 10 veces
 *
 * Return: retorna 0
 */
void print_alphabet_x10(void);
{
    int n = 0;
	char a;
    while (n < 10){
			for (a = 'a'; a <= 'z'; a++){
                     _putchar(a);
			}
		_putchar('\n');
		n++
	}
		
	return;
}
