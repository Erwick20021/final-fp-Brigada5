#include <stdio.h>
#include <string.h>
void
encontrar (int primero[], int tam1, int segundo[], int tam2, int resultado[])
{
  if (tam1 < tam2)
    {
      int k = 0;
      int i = 0;
      int j = 0;
      int d;
      for (i = 0; i < tam1; i++)
	{
	  for (j = 0; j < tam2; j++)
	    {
	      if (primero[i] == segundo[j])
		{
		  resultado[k] = primero[i];
		  k++;

		}
	    }
	}
      if (k == 0)
	{
	  printf ("\n%s", "No hay ningun elemento repetido");
	  return;
	}
      for (int a = 0; a < k; a++)
	{
	  for (int b = a + 1; b < k; b++)
	    {
	      if (resultado[a] == resultado[b])
		{
		  d = b;
		  while (d < k)
		    {
		      resultado[d] = resultado[d + 1];
		      ++d;
		    }
		  --k;
		  --b;
		}
	    }
	}
      for (int c = 0; c < k; c++)
	{
	  printf ("\nElemento %d arreglo resultado ---> (%d)", c,
		  resultado[c]);
	}
    }
  if (tam1 > tam2)
    {
      int k = 0;
      int i = 0;
      int j = 0;
      int d;
      for (i = 0; i < tam2; i++)
	{
	  for (j = 0; j < tam1; j++)
	    {
	      if (segundo[i] == primero[j])
		{
		  resultado[k] = segundo[i];
		  k++;
		}
	    }
	}
      if (k == 0)
	{
	  printf ("\n%s", "No hay ningun elemento repetido");
	  return;
	}
      for (int a = 0; a < k; a++)
	{
	  for (int b = a + 1; b < k; b++)
	    {
	      if (resultado[a] == resultado[b])
		{
		  d = b;
		  while (d < k)
		    {
		      resultado[d] = resultado[d + 1];
		      ++d;
		    }
		  --k;
		  --b;
		}
	    }
	}
      for (int c = 0; c < k; c++)
	{
	  printf ("\nSe repiten:");
	  printf ("\nElemento %d arreglo resultado ---> %d", c, resultado[c]);
	}
    }
  return;
}
