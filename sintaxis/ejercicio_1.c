#include <stdio.h>
/*
  #include <stdio.h> es una biblioteca de archivos de encabezado, que nos permite trabajar con funciones de entrada y salida, como "printf()" (que se utiliza mas adelante). Los archivos de encabezado agregan funcionalidad a los programas C.

  NOTA: no se preocupe si no entiende como include <stdio.h> funciona. Piense en ello como algo que (casi) siempre aparece en los programas de lenguaje C.
  
  Una linea en blanco. C ignora los espacios en blanco, pero lo usamos para que el codigo sea mas legible.

*/

int main() {
  /* 
   Otra cosa que siempre aparece en un programa en C es "main()" esto se llama una funcion. {} se ejecutara cualquier codigo dentro de sus corchetes 
  */

  printf("Hola mundo");

  /*
    "Printf()" es una funcion utilizada para  generar/ imprimir texto en una pantalla , en nuestro ejemplo , genrara "Hola mundo" 

    Nota: tenga en cuenta que cada declaracion C termina con un punto y coma ";"

    El cuerpo de "int main()" tambien podria escribirse como: "int main(){printf("Hola mundo"); return 0;}"

    Recuerde: el compilador ignora los espacios en blanco . Sin embargo varias lineas hacen que el codigo sea mas legible 
  */
  return 0;
  /*
    "return 0" finaliza la funcion "main"
  */

}
/* No olvide agregar el corchete en cierre "}" para finalizar la      funcion principal 
*/