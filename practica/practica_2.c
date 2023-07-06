/*
  2. Hacer una funcion que diga si un caracter esta en una cadena.
*/
#include <stdio.h>

int main(){
  char cadena[20];
  char caracter;

  printf("Ingrese una palabra o frase");
  scanf("%s", &cadena);
  printf("Ingrese la letra a buscar");
  scanf("%s", &caracter);

  char *dir = bascarCaracter(cadena, caracter);
  if(dir==NULL){//Un verdader indica que no se encontro el caracter de la cadena
    printf("No se encontro el caracter '%c' en la cadena \"%s\"\n", caracter, cadena);
  
  }
  else{
    *dir = caracter;
    printf("'%c' esta en la direccion %p de la cadena. \n", caracter, cadena);
    printf("Ahora la cadena es: %s\n", cadena);
  }
 return 0;
}


