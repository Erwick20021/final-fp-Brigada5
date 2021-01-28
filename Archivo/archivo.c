#include <stdio.h>
#include <stdlib.h>
 void copiar();
int main() {
 FILE *archivo;
 char caracteres[1000];
 archivo = fopen("numerosDesordenados.csv", "r");
 if (archivo != NULL) {
  printf("Archivo abierto correctamente.");
  printf("\nContenido:\n");
  while (feof(archivo)== 0) {
  fgets (caracteres, 1000, archivo);
  printf("%s", caracteres);
 }
printf("\n   Numeros Ordenados \n\n");
   char numerosOrdenados;
    numerosOrdenados=7;
    int numeros[numerosOrdenados];
     int i,j,k=1;
    for(i=0;i<numerosOrdenados;i++)
    {
       printf("%d Numero:",k);
        scanf("%d",&j);
        numeros[i] = j;
        k++;
    }
    char x, y;
    for(i=0;i<numerosOrdenados;i++)
    {
        for(j=i+1;j<numerosOrdenados;j++)
        {
            x = numeros[i]-numeros[j];
            if(x>0)
            {
                y = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = y;
            }
        }
    }
    void copiar()
 {
    printf("\n\n  Numeros ordenados:  \n");
    printf(" \n");
    for(i=0;i<numerosOrdenados;i++)
    {
   printf("%d \n\n",numeros[i]);
    }
}
        FILE *archivo2;
        char escribir;
        copiar();
       archivo2 = fopen("numerosOrdenados.csv", "wb");
       if (archivo2 != NULL) {
       printf("\n\n Los números se han ordenado y guardado en otro archivo \n\n");
      fprintf(archivo2,escribir);
      void trasladoDeDatos();
      printf("\n\n Desde la terminal, ejectua en forma:nombre_programa archivo_origen archivo_destino\n");
      fclose(archivo2);
 }
    fclose(archivo);
 copiar();
 }
  return 0;
 }


