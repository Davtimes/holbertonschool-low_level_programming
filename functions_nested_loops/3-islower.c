#include "main.h"

/**
  * _islower - Imprime el alfabeto
  * c: valor condicional
  * Return: 0 or 1
  */
int _islower(int c)
{
	if (c >= 'a' && c < 'z')
		return (1);
	else
		return (0);

}
