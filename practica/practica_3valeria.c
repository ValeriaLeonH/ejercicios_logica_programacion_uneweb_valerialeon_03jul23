/*
3. Hacer una función que diga si en una cadena hay sólo dígitos.`
*/
#include <stdio.h>
int main(void){
int p, num;

printf("Ingrese un numero\n");
p = scanf("%d", &num);

  while(!p){
    if(p){
    }else {
      printf("No es un numero por favor ingrese un numero");
      scanf("%d", &p);
    }

    printf("Es un numero");
   return 0;
  }