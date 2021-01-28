#include <stdio.h>
#include <string.h>

int buscar(const char * cadena1, const char * cadena2)
{

if (strstr(cadena1, cadena2) != NULL)
{
  printf("\t\n Existe %s dentro de %s\n", cadena2, cadena1);
}
else
{
  printf("\t\n No existe %s dentro de %s\n", cadena2, cadena1);
}

    return 0;
}
