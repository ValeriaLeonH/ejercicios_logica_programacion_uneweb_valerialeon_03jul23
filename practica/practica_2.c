/*
  2. Hacer una funcion que diga si un caracter esta en una cadena.
*/
#include <stdio.h>
#include <string.h>
 int main(){
    char cadena[100], caracter;
    int count=0;

    printf("Digite una cadena: ");
    gets(cadena);

    printf("Digite un caracter: ");
    scanf("%C", &caracter);

    for(int i=0; i< strlen(cadena); i++){
      if(cadena[i]==caracter){
        count++;
      }
    }
    
    if(count>0){
      printf("El caracter %c esta en la cadena %s\n", caracter, cadena);
    } else {
      printf("El caracter %c no se encuentra en la cadena %s\n", caracter, cadena);

    }
  }
vcvvv