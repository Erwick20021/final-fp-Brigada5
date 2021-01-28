#include <stdio.h>
#include <string.h>
int
validaCadena (const char *cadena)
{
  int tamano = strlen (cadena);
  if (tamano % 2 != 0)
    {
      printf ("%d\n", 0);
      return 0;
    }
  if (tamano == 0)
    {
      printf ("%d\n", 0);
      return 0;
    }
  int tamanoCero = tamano / 2;
  int tamanoUno = tamano / 2;
  if (cadena[0] == *"0")
    {
      int i = 0;
      for (i = 0; i < tamanoCero - 1; i++)
	{
	  if (cadena[i] != cadena[i + 1])
	    {
	      printf ("%d\n", 0);
	      return 0;
	    }
	}
      if (cadena[i + 1] == *"1")
	{
	  for (int j = i + 1; j < tamano - 1; j++)
	    {
	      if (cadena[j] != cadena[j + 1])
		{
		  printf ("%d\n", 0);
		  return 0;
		}
	    }
	}
    }
  else if (cadena[0] == *"1")
    {
      int i = 0;
      for (i = 0; i < tamanoUno - 1; i++)
	{
	  if (cadena[i] != cadena[i + 1])
	    {
	      printf ("%d\n", 0);
	      return 0;
	    }
	}
      if (cadena[i + 1] == *"0")
	{
	  for (int j = i + 1; j < tamano - 1; j++)
	    {
	      if (cadena[j] != cadena[j + 1])
		{
		  printf ("%d\n", 0);
		  return 0;
		}
	    }
	}
    }
  printf ("%d\n", 1);
  return 0;
}
