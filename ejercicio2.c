/*Alfonso francisco De Abiega L'Eglisse
clase 7 ejercicio 2*/

#include <stdio.h>

void main()
{
  int matrix[4][3], sum = 0, m = 0, mc;
  int i, j;

  //Llnado de matriz
  for(i = 0; i < 4; i++) //Llenado de los filas
  {
    for(j = 0; j < 3; j++) //Lenado de las columnas
    {
      printf("Dame el valor de la posicion %d,%d:  ", i,j);
      scanf("%d", &matrix[i][j]);
    }
  }

  for(i = 0; i < 3; i++) //Llenado de los columnas
  {
    for(j = 0; j < 4; j++) //Lenado de las filas
    {
      sum = sum + matrix[j][i];
    }
    if(m < sum)
    {
      m = sum;
      mc = i;
    }
    sum = 0;
  }
  printf("La columna %d tiene la mayor suma con un total de %d\n", mc + 1, m);
}
