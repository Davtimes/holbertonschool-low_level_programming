#include "main.h"

/**
  * _isalpha - Imprime el alfabeto
  * @c: valor condicional
  * Return: 0 o 1
  */
int _isalpha(int c)
{
	if ((c >= 97 && c < 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
