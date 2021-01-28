#include <stdio.h>
#include <stdlib.h>
int main()
{
  int numeroDeFilas;
  int numeroaImprimir;
  int impresiones;
       printf("Introduce el numero de filas que tendra la piramide: ");
       scanf("%i",&numeroDeFilas);
       printf("\n");
         for(numeroaImprimir=1;numeroaImprimir<=numeroDeFilas;numeroaImprimir++)
         {
            for(impresiones=1;impresiones<=numeroaImprimir;impresiones++)
               {
                 printf("%i ",numeroaImprimir);
               }

          printf("\n");
        }
  return 0;
}
