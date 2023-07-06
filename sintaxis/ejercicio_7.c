#include <stdio.h>

int main() {
  //Variables en el lenguaje C 
  /*
  Las variables son contenedores para almacenar vaLores de datos , como numeros y caracteres

  En C, hay diferentes tipos de variables (definidas con diferentes palabras clave), por ejemplo:

    -int- almacena enteros (numeros enteros), sin decimales, como 123 o -123

    -float- almacena numeros de coma flotante, con decimales, como el 19.99 o -19.99

    -char- Almacena caracteres individuales, como 'a' o 'b'. Los valores de char estan entre comillas simples.

    Declarar (crear) variables

    Para crear una variable, especifique el tipo y asignele un valor :
    "type variable name = value";

    donde type es uno de los tipos de variables de C (como int) y variableName es el nombre de la variable (como x o my name). El signo igual se utiliza para asignar un valor a la variable.

    Creemos una variable que almacena el calor de un numero 
  */
  int myNum = 15; 
  
  //tambien se puede declarar una variable sin asignar el valor y asignarlo mas tarde, ejemplo: 
  
  //Declaramos la variable 
  int myNumDos;

  //Asignamos el valor de la variable
  myNumDos = 20;

  /*
   int myNumTres = 25;
   printf(myNumTres); Nada va a pasar 

   Para generar la impresion de variables en C, debemos familiarizarnos con algo llamado "especificadores de formato"
  */

 // especificadores de formato 

 /*
   Los especificadores de formato se usan junto con la funcion "printf()" para decirle al compilador que tipo de datos esta almacenando la variable. Es basicamente un marcador de posicion para el valor de la variable.

   Un especificador de formato comienza con un signo de porcentaje "%", seguido de un caracter.

   Por ejemplo, para generar el valor de una variable de tipo int, se debe usar el especificador de formato %d o %i, estos deben estar entre comillas dobles dentro de la funcion printf();
 */
 
 int myNumCuatro = 30;
 printf("%d\n", myNumCuatro); //va a tener como salida 30 

 /*
    Para imprimir otros tipos, usa "%c" para tipos de datos "char" y "%f" para tipos de dato float.
 */
 int myNumCinco = 30;
 float myFloatNum =7.89;
 char myLetter = 'S';

 //Imprimir variables 

  printf("%d\n", myNumCinco);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);

  /*
  Para combinar texto y una variable, separelos con una coma dentro de la funcion "printf()":
  */

  int myNumSeis = 35;
  printf("Mi numero favorito es el: %d\n", myNumSeis);

  /*
  Para imprimir diferentes tipos en una sola funcion "printf()", se puede usar lo siguiente
  */
  
  int myNumSiete =40;
  char myLetterDos = 'X';
  printf("Mi numero favorito es el %d y mi letra es la %c", myNumSiete, myLetterDos);

  /*
   Cambiar los valores de las variables
   
   Nota: si asigna un nuevo valor a una variable existente, sobreescribira el valor anterior. ejemplo:
  */

  int myNumOcho = 45; //myNumOcho es 45;
  myNumOcho = 7; //myNumOcho ahora es 7;

  /*
    Tambien se puede asignar el valor de una variable a otra: ejemplo 
  */


  int myNumNueve= 50;
  int myOtroNum = 12;

  //Asignamos el valor de "myOtroNum" (12) a "myNumNueve"

  myNumNueve = myOtroNum;

  //myNumNueve es ahora 12 en lugar de 50;

  /*
   o copiar valores a variables vacias
  */

 //Creamos una variable y le asignamos el valor de 16.

  int myNumDiez = 55;

  //Declaramos una variable sin asignarle un valor 

  int myOtroNumDos;

  //asignamos el valor de "myNumDiez" a "myOtroNumDos"

  myOtroNumDos = myNumDiez;

  // Ahora "myOtroNumDos" tiene un valor de 55;

  printf("%d", myOtroNumDos);

  //Agregar variables juntas

  /*
    Para agregar una variable a otra, se puede usar el operador "+". Ejemplo:
  */

  int x=7;
  int y =4;
  int sum= x+y;
  printf("%d\n", sum);

 //Declarar multiples variables 

 /*
  Para declarar multiples variables del mismo tipo, se debe utilizar una lista separada por comas:
 */

  int z = 8, q = 4, p = 10;
  printf("%d", z+q+p);

  /*
    tambien se puede asignar el miusmo valor a multiples variables del mismo tipo
  */

 int w, e, r;
 w = e = r =24;
 printf("%d",w+e+r);

 //Nombres de variables

 /*
    Todas las variables de C deben identificarse con nombrees exclusivos 

   Estos nombres unicos se denominan "identificadores" 
  
    Los identificadores pueden ser nombres (como x o y ) o nombres mas  descriptivos como (edad, suma, volumentotal).
  
    Nota: se recomienda utilizar nombres descriptivos para crear un codigo comprensible y mantenible:

 */
  
  //Buen nombre 
  int minutosPorHora = 60;
  
  // Bien , pero es dificil comprender que significa la variable de nombre m

  int m = 60;

  /*
  Las reglas generales para nombrar variables son:
   -Los nombres pueden contener letras, digitos y guiones bajos.
   
   -Los nombres pueden comenzar con una letra o guion bajo (_).

   -Los nombres distinguenm entre mayusculas y minusculas ("myVar" y "myvar" con variables diferentes)

   -Los nombres no pueden contener espacios en blanco ni caracteres especiales como: !, #,/ , %, etc.

   -Las palavbras reservadas (como int) no se pueden usar como nombres 
  */

 //Ejemplos de la vida real

  /*
   A menudo se simplifican los nombres de las variables para que coincidan con su tipo de datos (myInt o myNum para tipos int, myChar, para tipos char, etc). Esto se hace para evitar confuciones. 

   Sin embargo si deseamos un ejemplo de la vida real sobre como se pueden usar las variables , echemos un vistazo a lo siguiente, donde hemos creado un programa que almacema diferentes datos de un estudiante universitario, 
 */

  int studentID = 15;
  int studentAge = 23;
  float studentFee = 75.25;
  char studentGrade = 'B';

  //Impresion de variables

  printf("Student ID: %d\n", studentID);\
  printf("Student age: %d\n", studentAge);
  printf("Student fee: %f\n", studentFee);
  printf("Student grade: %c\n", studentGrade);


  return 0;
}



