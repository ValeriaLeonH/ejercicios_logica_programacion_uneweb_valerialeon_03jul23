# Tarea Viernes 15 de septiembre

## teórica

1. Lea el artículo [Fundamentals Part 4](https://www.theodinproject.com/lessons/foundations-fundamentals-part-4) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA SOBRE MATRICES, BUCLES, 


2. Lea el artículo [Introduction](https://www.theodinproject.com/lessons/foundations-fundamentals-part-4#introduction) y diga en clases que conclusiones puede tener del artículo.

aprenderá sobre las matrices, que son estructuras de datos que pueden almacenar múltiples valores en una sola variable. Las matrices son muy útiles para organizar y manipular grandes cantidades de datos. También aprenderá sobre los bucles, que son estructuras de control que le permiten ejecutar un bloque de código repetidamente. 

3. Lea el artículo [Lesson overview](https://www.theodinproject.com/lessons/foundations-fundamentals-part-4#lesson-overview) y diga en clases que conclusiones puede tener del artículo.

Usando matrices.
Usando métodos de matriz integrados.
Usando bucles.
Ensuciarte las manos con ejercicios TDD.

4. Lea el artículo [JavaScript Arrays](https://www.w3schools.com/js/js_arrays.asp) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA DE ARREGLOS EN JAVASCRIPT

1. para declarar una matriz: colocamos const, espacio, nombre de la matriz, entre corchetes los elementos de la matiz, que tiene que ir entre comillas y separado por comas.

  const cars = ["Saab", "Volvo", "BMW"];

O DE LA FORMA :
   const cars = new Array("Saab", "Volvo", "BMW");
  
2. ACCEDIENDO A LA MATRIZ: se accede a un elemento de matriz haciendo referencia al numero de indice: 
  const cars = ["Saab", "Volvo", "BMW"];
  let car = cars[0];

3. CAMBIAR UN ELEMENTO DE MATRIZ: haciendo la siguiente declaracion
  const cars = ["Saab", "Volvo", "BMW"];
  cars[0] = "Opel";

4. CONVERTIR UNA MATRIZ EN UNA CADENA: con el metodo ToString()
  const fruits = ["Banana", "Orange", "Apple", "Mango"];
  document.getElementById("demo").innerHTML = fruits.toString();

5. ACCEDA A LA MATRIZ COMPLETA: haciendo referencia al nombre de la matriz

  const cars = ["Saab", "Volvo", "BMW"];
  document.getElementById("demo").innerHTML = cars;

6. UNA MATRIZ ES typeof object, 
  * Las matrices utilizan números para acceder a sus "elementos". En este ejemplo, person[0] devuelve John
    const person = ["John", "Doe", 46];

  * Los objetos usan nombres para acceder a sus "miembros". En este ejemplo, person.firstName devuelve John
    const person = {firstName:"John", lastName:"Doe", age:46};

7. LOS ELEMENTOS DE LA MATRIZ TAMBIEN SON OBJETOS: pueden tener objetos, funciones, arrays dentro de array 

8. PROPIEDAD LENGTH : La length propiedad de una matriz devuelve la longitud de una matriz (el número de elementos de la matriz).

9. PARA ACCEDER A ALGUN ELEMENTO DE LA MATRIZ: la llamamos elemento[numero-de-posicion].
  const fruits = ["Banana", "Orange", "Apple", "Mango"];
  let fruit = fruits[0];

10. EL ULTIMO (con el mismo ejemplo de arriba):
  let fruit = fruits[fruits.length - 1];

11. ELEMENTOS DE MATRIZ EN BUCLE: Una forma de recorrer una matriz es mediante un forbucle, También puedes utilizar la Array.forEach()función:
  const fruits = ["Banana", "Orange", "Apple", "Mango"];

  let text = "<ul>";
  fruits.forEach(myFunction);
  text += "</ul>";

  function myFunction(value) {
    text += "<li>" + value + "</li>";
  }

12. AGREGAR ELEMENTOS A LA MATRIZ: usando push():
  const fruits = ["Banana", "Orange", "Apple"];
  fruits.push("Lemon");

O USANDO length: 
  const fruits = ["Banana", "Orange", "Apple"];
  fruits[fruits.length] = "Lemon";

13. MATRICES ASOCIATIVAS: Las matrices con índices con nombre se denominan matrices asociativas (o hashes).
  const person = [];
  person[0] = "John";
  person[1] = "Doe";
  person[2] = 46;
  person.length;    
  person[0];

14. La diferencia entre matrices y objetos
En JavaScript, las matrices utilizan índices numerados .  

En JavaScript, los objetos utilizan índices con nombre .

5. Lea el artículo [JavaScript Array Methods](https://www.w3schools.com/js/js_array_methods.asp) y diga en clases que conclusiones puede tener del artículo.

HABLA DE LOA METODOS PARA ARRAYS EN JAVASCRIPT 


- length: La lengthpropiedad devuelve la longitud (tamaño) de una matriz:

  const fruits = ["Banana", "Orange", "Apple", "Mango"];
  let size = fruits.length;

- toString(): El método JavaScript toString()convierte una matriz en una cadena de valores de matriz (separados por comas).

  const fruits = ["Banana", "Orange", "Apple", "Mango"];
  document.getElementById("demo").innerHTML = fruits.toString();

El join()método también une todos los elementos de la matriz en una cadena.

- pop(): El pop()método elimina el último elemento de una matriz:

  const fruits = ["Banana", "Orange", "Apple", "Mango"];
  fruits.pop();

- push(): El push()método agrega un nuevo elemento a una matriz (al final):

  const fruits = ["Banana", "Orange", "Apple", "Mango"];
  fruits.push("Kiwi");

- shift(): El shift()método elimina el primer elemento de la matriz y "desplaza" todos los demás elementos a un índice inferior.

  const fruits = ["Banana", "Orange", "Apple", "Mango"];
  fruits.shift();

- unshift(): El unshift()método agrega un nuevo elemento a una matriz (al principio) y "desplaza" los elementos más antiguos:
  const fruits = ["Banana", "Orange", "Apple", "Mango"];
fruits.unshift("Lemon");


- join(): El join()método también une todos los elementos de la matriz en una cadena.
  const fruits = ["Banana", "Orange", "Apple", "Mango"];
  document.getElementById("demo").innerHTML = fruits.join(" * ");

- delete(): para eliminar


- concat(): El concat()método crea una nueva matriz fusionando (concatenando) matrices existentes:

  const myGirls = ["Cecilie", "Lone"];
  const myBoys = ["Emil", "Tobias", "Linus"];

  const myChildren = myGirls.concat(myBoys);

- flat(): para reducir los corchetes de un array con mas arrays adentro

- splice(): El splice()método agrega nuevos elementos a una matriz.


- slice(): El slice()método corta una parte de una matriz.

6. Vea el video [JavaScript Arrays Crash Course](https://www.youtube.com/watch?v=7W4pQQ20nJg&ab_channel=WebDevSimplified) y diga en clases que conclusiones puede tener del video.


7. Vea el video [Arrays](https://www.theodinproject.com/lessons/foundations-fundamentals-part-4#arrays) y diga en clases que conclusiones puede tener del video.


8. Lea el artículo [Looping code](https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Building_blocks/Looping_code) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA DE COMO HACER LOOPS EN JAVASCRIPT

- NOS HABLA DE QUE USAMOS LOOP CADA VES QUE QUERRAMOS HACER UNA ACCION REPETIDAS VECES, SIN TENER QUE REPETIR EL CODIGO TANTAS VECES. 

- PARA RECORRER COLLECCIONES, EJEMPLO PARA RECORRER ARRAYS, SET O MAP 

- bucle de tipo FOR ... OF
    const cats = ["Leopard", "Serval", "Jaguar", "Tiger", "Caracal", "Lion"];

  for (const cat of cats) {
    console.log(cat);
  }

  EXPLICACION: Dada la colección cats, obtén el primer artículo de la colección.
  Asígnalo a la variable caty luego ejecuta el código entre llaves {}.
  Obtenga el siguiente artículo y repita (2) hasta llegar al final de la colección

- map() and filter():
  * Puede utilizar map()para hacer algo con cada elemento de una colección y crear una nueva colección que contenga los elementos modificados:

  function toUpper(string) {
  return string.toUpperCase();
  }

  const cats = ["Leopard", "Serval", "Jaguar", "Tiger", "Caracal", "Lion"];

  const upperCats = cats.map(toUpper);

  console.log(upperCats);
  // [ "LEOPARD", "SERVAL", "JAGUAR", "TIGER", "CARACAL", "LION" ]

  * Puede utilizar filter()para probar cada elemento de una colección y crear una nueva colección que contenga solo elementos que coincidan:

  function lCat(cat) {
  return cat.startsWith("L");
  }

  const cats = ["Leopard", "Serval", "Jaguar", "Tiger", "Caracal", "Lion"];

  const filtered = cats.filter(lCat);

  console.log(filtered);
  // [ "Leopard", "Lion" ]

- EL ESTANDAR PARA LOOP 
  for (initializer; condition; final-expression) {
  // code to run
  }

- SALIR DE UN BUBLE con break;Si desea salir de un bucle antes de que se hayan completado todas las iteraciones, puede utilizar la instrucción break; una breakdeclaración saldrá inmediatamente del bucle y hará que el navegador pase a cualquier código que le siga.

- SALTAR ITERACIONES CON continue: La instrucción continue funciona de manera similar a break, pero en lugar de salir del ciclo por completo, salta a la siguiente iteración del ciclo. 

9. Lea el artículo [Loops: while and for](https://javascript.info/while-for) y diga en clases que conclusiones puede tener del artículo.

HABLA DE LOS CICLOS, LOOPS WHILE Y FOR:

- WHILE: Si bien conditiones verdadero, codese ejecuta el cuerpo del bucle.

while (condition) {
  // code
  // so-called "loop body"
}

- DO ... WHILE:
do {
  // loop body
} while (condition);

- FOR : 

for (begin; condition; step) {
  // ... loop body ...
}

- BREAK: Normalmente, un bucle sale cuando su condición se vuelve falsa. Pero podemos forzar la salida en cualquier momento utilizando la breakdirectiva especial.

- CONTINUE: La continue directiva es una “versión más ligera” de break. No detiene todo el ciclo. En cambio, detiene la iteración actual y obliga al bucle a iniciar una nueva (si la condición lo permite).

- UTILIZANDO OPERADOR TERNARIO: 
if (i > 5) {
  alert(i);
} else {
  continue;
}

SINTAXIS: 
(i > 5) ? alert(i) : continue; // continue isn't allowed here


NOTAS :

- while– La condición se verifica antes de cada iteración.

- do..while– La condición se verifica después de cada iteración.

- for (;;)– La condición se verifica antes de cada iteración, configuraciones adicionales disponibles.

- Para hacer un bucle “infinito”, normalmente while(true)se utiliza la construcción. Este bucle, como cualquier otro, puede detenerse con la breakdirectiva.

- Si no queremos hacer nada en la iteración actual y queremos pasar a la siguiente, podemos usar continue 

- break/continue etiquetas de soporte antes del bucle. Una etiqueta es la única forma de break/continueescapar de un bucle anidado para ir a uno externo.

10. Lea el artículo [Tasks](https://javascript.info/while-for#tasks) y diga en clases que conclusiones puede tener del artículo.


11. Lea el artículo [Test Driven Development](https://www.theodinproject.com/lessons/foundations-fundamentals-part-4#test-driven-development) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA DE Test Driven Development (TDD), Se refiere a la práctica de escribir pruebas automatizadas que describen cómo debería funcionar su código antes de escribirlo.


12. Lea el artículo [javascript-exercises](https://github.com/TheOdinProject/javascript-exercises) y diga en clases que conclusiones puede tener del artículo.

EJERCICIOS DE JAVASCRIPT

13. Lea el artículo [README.md](https://github.com/TheOdinProject/javascript-exercises#readme) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA DE COMO HACER LOS EJERCICIOS COMPLEMENTARIOS DE THE ODIN PROJECT, EXPLICA COMO TRUNCAR Y DEPURAR

14. Realiza todas las actividades de [Assignment](https://www.theodinproject.com/lessons/foundations-fundamentals-part-4#assignment) y diga en clases que conclusiones puede tener del artículo.


15. Responda las preguntas de [Knowledge check](https://www.theodinproject.com/lessons/foundations-fundamentals-part-4#knowledge-check) y diga en clases que conclusiones puede tener del artículo.


16. Realiza todas las actividades de [Additional resources](https://www.theodinproject.com/lessons/foundations-fundamentals-part-4#additional-resources) y diga en clases que conclusiones puede tener del artículo.


## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).
2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).
3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).
4. Termine los retos plasmados en los ejercicios del `1` al `63` de [Responsive Web Design](https://www.freecodecamp.org/learn/2022/responsive-web-design/), del apartado `Learn HTML Forms by Building a Registration Form` del portal [freeCodeCamp](https://www.freecodecamp.org/learn/).
5. Realizar los ejercicios del portal o aplicativo [Duolingo](https://www.duolingo.com/learn) de la `sección 10` del idioma `inglés`.