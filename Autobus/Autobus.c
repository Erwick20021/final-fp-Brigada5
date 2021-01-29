#include <stdio.h>

int calcularPasajeros (int cambios[][2], int t)
{
  int suben = 0, bajan = 0;
  int i, j;
  for (i = 0; i < t; i++)
    {
      for (j = 0; j < 1; j++)
	{
	  suben = suben + cambios[i][j];
	}
      for (j = 1; j < 2; j++)
	{
	  bajan = bajan + cambios[i][j];
	}
    }
  return suben - bajan;
}


