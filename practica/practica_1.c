/*
1. Hacer una funcion que diga si un numero es primo 
*/

#include <stdio.h>

int main() {
 /*
    int numero;
    int count=0;
*/


 int numero, count=0;

 printf("Digite un numero"); 
 scanf("%i", &numero);

  for (int i=1; i <= numero; i++){
    if(numero % i == 0){
      /*
        "Este codigoi hace lo miusmo que lo que esta aqui abajo "
        count = count +1;
      */
      count++;
    }
  } 

  if (count>2) {
    printf("El numero %i no es primo", numero);
  } else {
    printf("El numero  %i es primo", numero);
  }

 return 0;
}