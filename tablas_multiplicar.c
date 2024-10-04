/*Mikel Martinez Mendoza
Laboratorio practica 8
tablas de multiplicar*/

#include <stdio.h>
#include <stdlib.h>

void mult_for(int n);
{
  int resp;

  for(int i = 1; i <= 10; i++)
  {
    resp = n * i;
    printf("%d * %d = %d\n", n, i, resp);
  }
  return 0;
}

void mult_while(int n)
{
    int resp;
    int i = 1;

    while (i <= 10)
    {
    printf("dame el numero de la tabla a multiplicar: ");
    scanf("%d", n);

    mult_for(n);
    return 0;
}
    
