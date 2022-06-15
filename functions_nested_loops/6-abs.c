#include "main.h"

/**
  *  _abs - cumputa el valor absoluto de un entero int (integer)
  * @p: valor a condicionar
  * Return: 0 o 1
  */
int _abs(int p)
{
	if (p < 0)
	{
		p = p * -1;
	}
	return (p);
}
