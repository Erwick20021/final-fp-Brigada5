#include <stdio.h>
int encontrarElementoMenor (int arreglo[], int tam)
{
  int menor, i;
  menor = arreglo[0];
  for (i = 0; i < tam; i++)
    {
      if (arreglo[i] < menor)
	{
	  menor = arreglo[i];
	}
    }
  printf ("El menor es %d\n", menor);
  return 0;
}
