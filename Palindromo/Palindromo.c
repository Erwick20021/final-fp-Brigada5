
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
  int n, numero, siONoPal, contador1, contador2;
  char* cadena1 = (char*)malloc(100);
  char* cadena2 = (char*)malloc(100);
  siONoPal = 1;
  contador2 = 0;
  char x = ' ';
  printf("Escribe la frase o palabra a analizar: \n");
  gets(cadena1);
 
    
  n=strlen(cadena1);
  for(contador1=0;contador1<=n;contador1=contador1+1){
    if (isupper(cadena1[contador1])){
      cadena1[contador1] = tolower(cadena1[contador1]);
    }
    if(cadena1[contador1] != x){
      cadena2[contador2] = cadena1[contador1];
      contador2=contador2+1;
    }
  }
  
  numero = strlen(cadena2);
  printf("Tiene %d letras \n", numero);
    

  for(contador1=0;contador1<=numero/2;contador1=contador1+1){
    if((cadena2[contador1] != cadena2[numero-contador1-1]) | (strlen(cadena1)==0)){
        siONoPal = 0;
    }
  }
  if(siONoPal){
      printf("Si es un palindromo\n");
  }else{
    printf("No es un palindromo\n");
  }
    
  free(cadena1);
  free(cadena2);

}


