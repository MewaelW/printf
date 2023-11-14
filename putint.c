#include "main.h"
/**
* putint - prints numbers
*
*@n: number to be printed
* Return: int
*/
int putint(int n)
{
  unsigned int n1;

  if (n < 0)
  {
    putchr('-');
    n1 = -n;
  }
  else
    n1 = n;

  if (n1 / 10)
    putint(n1 / 10);
  putchr((n1 % 10) + '0');
  return (n1);
}
