#include "main.h"

/**
  * print_sign -  Imprime el simbolo de un numero
  * @n: v
  * Return: 0 , 1 o -1 dependiendo de la condicion que cumpla el numero
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
