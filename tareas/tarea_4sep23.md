# Tarea Jueves 31 de agosto

## teórica

1. Lea el artículo [Fundamentals Part 1](https://www.theodinproject.com/lessons/foundations-fundamentals-part-1) y diga en clases que conclusiones puede tener del artículo.

habla sobre Javascript, y todo lo inicial que debes sabes, variables, operaciones, operadores, operandos, cadenas, etc

2. Lea el artículo [Introduction](https://www.theodinproject.com/lessons/foundations-fundamentals-part-1#introduction) y diga en clases que conclusiones puede tener del artículo.

La introduccion dice que de una vez vamos a ver JavaScript

3. Lea el artículo [Lesson overview](https://www.theodinproject.com/lessons/foundations-fundamentals-part-1#lesson-overview) y diga en clases que conclusiones puede tener del artículo.

¿Cómo se declara una variable?
¿Cuáles son las tres formas diferentes de declarar una variable?
¿Cuál deberías usar y cuándo?
¿Cuáles son las reglas para nombrar variables?
¿Qué son operadores, operandos y operaciones?
¿Qué es la concatenación y qué sucede cuando sumas números y cadenas?
¿Cuáles son los diferentes tipos de operadores en JavaScript?
¿Cuál es la diferencia entre == y ===?
¿Qué son los valores de precedencia de los operadores?
¿Qué son los operadores de incremento/decremento?
¿Cuál es la diferencia entre anteponerlos y posfijarlos?
¿Qué son los operadores de asignación?
¿Qué es el Operador Unario Plus?

4. Lea el artículo [Live Server](https://marketplace.visualstudio.com/items?itemName=ritwickdey.LiveServer) y diga en clases que conclusiones puede tener del artículo.

installacion de live server no me sirvio

5. Lea el artículo [How to run JavaScript code](https://www.theodinproject.com/lessons/foundations-fundamentals-part-1#how-to-run-javascript-code) y diga en clases que conclusiones puede tener del artículo.

El articulo dice que debemos ejecutar un codigo de JavaScript en el navegador de forma predeterminada

USANDO LA ETIQUETA SCRIPT

<script>
    // Your JavaScript goes here!
    console.log("Hello, World!")
  </script>

O DE LA SIGUIENTE FORMA 

Otra forma de incluir JavaScript en una página web es mediante un script externo. Esto es muy similar a vincular documentos CSS externos a su sitio web.

  <script src="javascript.js"></script>

6. Lea el artículo [Variables](https://javascript.info/variables) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de variables, Una variable es un "almacenamiento con nombre" para datos. Para crear una variable en JavaScript, use la letpalabra clave.

Ejemplo

let message;

message = 'Hello'; // store the string 'Hello' in the variable named message

SE PUEDE HACER CREANDO UNA VARIABLE Y LUEGO LLAMANDOLA
let message;
message = 'Hello!';

alert(message); // shows the variable content

ESCRIBIR VARIAS VARIABLES EN UNA SOLA LINEA
let user = 'John', age = 25, message = 'Hello';

ESCRIBIR MULTIPLES VARIABLES EN VARIAS LINEAS
let user = 'John';
let age = 25;
let message = 'Hello';

7. Lea el artículo [Variables](https://www.theodinproject.com/lessons/foundations-fundamentals-part-1#variables) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de variables 

las variables son simplemente "contenedores de almacenamiento" para los datos de su código.

Hasta hace poco, sólo había una forma de crear una variable en JavaScript: la vardeclaración. Pero en las versiones más recientes de JavaScript tenemos dos formas más: lety const.

8. Lea el artículo [JavaScript Arithmetic](https://www.w3schools.com/js/js_arithmetic.asp) y diga en clases que conclusiones puede tener del artículo.

EL articulo habla sobre los operadores, operando y operaciones

Operator	Description
+	Addition
-	Subtraction
*	Multiplication
**	Exponentiation (ES2016)
/	Division
%	Modulus (Remainder)
++	Increment
--	Decrement

Operand	Operator	Operand
100      	+       	50

9. Lea el artículo [JavaScript Numbers](https://www.w3schools.com/js/js_numbers.asp) y diga en clases que conclusiones puede tener del artículo.

EL articulo habla de los tipos de numeros de javascript

1. Los números enteros (números sin punto ni notación de exponente) tienen una precisión de hasta 15 dígitos.
2. Precisión flotante : La aritmética de coma flotante no siempre es 100% precisa
3. Agregar números y cadenas
4. Cadenas numéricas
5. NaN - No es un número: NaNes una palabra reservada de JavaScript que indica que un número no es un número legal.
6.  Infinity(o -Infinity) es el valor que JavaScript devolverá si calcula un número fuera del mayor número posible.
7. hexadecimal: JavaScript interpreta las constantes numéricas como hexadecimales si están precedidas por 0x.
8. 

10. Lea el artículo [Basic math in JavaScript — numbers and operators](https://developer.mozilla.org/en-US/docs/Learn/JavaScript/First_steps/Math) y diga en clases que conclusiones puede tener del artículo.

EL articulo habla de Matemáticas básicas en JavaScript: números y operadores:

TIPOS DE NUMEROS:
  - Los números enteros 
  - Los números de coma flotante (flotantes) 
  - Los dobles son un tipo específico de número de punto flotante que tiene mayor precisión que los números de punto flotante estándar (lo que significa que tienen una precisión de un mayor número de decimales).

O
  - Binario : el lenguaje de nivel más bajo de las computadoras; 0 y 1.
  - Octal : base 8, utiliza del 0 al 7 en cada columna.
  - Hexadecimal : base 16, utiliza 0–9 y luego a–f en cada columna. Es posible que haya encontrado estos números antes al configurar colores en CSS .

NOTAS
- para redondear su número a un número fijo de decimales, utilice el toFixed()método.

- pasar el valor de la cadena al Number()constructor para devolver una versión numérica del mismo valor.

Operator	Description
+	Addition
-	Subtraction
*	Multiplication
**	Exponentiation (ES2016)
/	Division
%	Modulus (Remainder)
++	Increment
--	Decrement

-ADEMAS HABLA DE OPERADORES DE INCREMENTO, DECREMENTO, DE ASIGNACION

-OPERADORES DE COMPARACION
  - ===	Estricta igualdad
  - !==	Estricta no igualdad
  - <	Menos que
  - >	Mas grande que
  - <=	Menos que o igual a
  - >=	Mayor qué o igual a

11. Lea el artículo [Basic operators, maths](https://javascript.info/operators) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de Operadores básicos, matemáticas.

- Se admiten las siguientes operaciones matemáticas:

Además +,
resta -,
multiplicación *,
división /,
Resto %,
Exponenciación **.

- Operadores bit a bit
Los operadores bit a bit tratan los argumentos como números enteros de 32 bits y trabajan en el nivel de su representación binaria.

Estos operadores no son específicos de JavaScript. Son compatibles con la mayoría de los lenguajes de programación.

La lista de operadores:

Y ( &)
O ( |)
XOR ( ^)
NO ( ~)
MAYÚS IZQUIERDA ( <<)
SHIFT DERECHA ( >>)
DESPLAZAMIENTO A LA DERECHA DE LLENADO CERO ( >>>)


12. Lea el artículo [Numbers](https://www.theodinproject.com/lessons/foundations-fundamentals-part-1#numbers) y diga en clases que conclusiones puede tener del artículo.


13. Realiza todas las actividades de [Assignment](https://www.theodinproject.com/lessons/foundations-fundamentals-part-1#assignment) y diga en clases que conclusiones puede tener del artículo.


14. Responda las preguntas de [Knowledge check](https://www.theodinproject.com/lessons/foundations-fundamentals-part-1#knowledge-check) y diga en clases que conclusiones puede tener del artículo.

- Nombra las tres formas de declarar una variable.
con let, const, var

- ¿Cuál de las tres declaraciones de variables debería evitar y por qué?

el var porque ya no se usa

- ¿Qué reglas debes seguir al nombrar variables?

-El nombre debe contener sólo letras, dígitos o los símbolos $y _.
-El primer carácter no debe ser un dígito.

- ¿Qué sucede cuando sumas números y cadenas?

Cuando sumas numeros con cadenas, lo que ocurre es que la cadena se escribe al lado del numero y no suma

- ¿Cómo funciona el operador Módulo (%) o Resto?

Resto %
El operador restante %, a pesar de su apariencia, no está relacionado con porcentajes.

El resultado de a % bes el resto de la división entera de apor b.

- Explique la diferencia entre ==y ===.
Cuando se utiliza el ==operador, no hay restriccion de tipo
Cuando se utiliza el ===operador, si hay restriccion de tipo
 
- ¿ Cuándo recibirías un NaNresultado?

NaN - No es un número
NaNes una palabra reservada de JavaScript que indica que un número no es un número legal.

Intentar hacer aritmética con una cadena no numérica dará como resultado NaN(No es un número)

- ¿Cómo se incrementa y disminuye un número?
++	Increment
--	Decrement

- Explique la diferencia entre operadores de incremento/decremento de prefijo y posfijo.
  * Cuando el operador busca la variable, está en “forma de sufijo”: counter++.
  * La “forma de prefijo” es cuando el operador va antes de la variable: ++counter.

  counter++ , //postfixing
  ++counter , //prefixing

- ¿Qué es la precedencia de operadores y cómo se maneja en JS?
Es el orden de prioridad de las operaciones matematicas

Precedencia	Nombre	Firmar
…	…	…
14	unario más	+  //esto es de signo no de suma
14	negación unaria	-  //esto es de signo no de suma
13	exponenciación	**
12	multiplicación	*
12	división	/
11	suma	+
11	sustracción	-
…	…	…
2	asignación	=
…	…	…


- ¿Cómo se accede a las herramientas de desarrollador y a la consola?

Guarde y abra este archivo en un navegador web (¡puede usar "Live Server" en Visual Studio Code para hacer esto!) y luego abra la consola del navegador haciendo clic derecho en la página web en blanco y seleccionando "Inspeccionar" o "Inspeccionar". Elemento". En el panel "Herramientas de desarrollador", busque y seleccione la pestaña "Consola" , donde debería ver el resultado de nuestra console.logdeclaración.

- ¿Cómo se registra información en la consola?

console.log()es el comando para imprimir algo en la consola del desarrollador en su navegador. 

- ¿Qué hace el operador unario más en las representaciones en cadena de números enteros? p.ej. +”10”
Transforma la cadena de caracteres en numeros

15. Realiza todas las actividades de [The old "var"](https://javascript.info/var) y diga en clases que conclusiones puede tener del artículo.


16. Realiza todas las actividades de [Additional resources](https://www.theodinproject.com/lessons/foundations-fundamentals-part-1#additional-resources) y diga en clases que conclusiones puede tener del artículo.

## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).
2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).
3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).
4. Termine los retos plasmados en los ejercicios del `1` al `63` de [Responsive Web Design](https://www.freecodecamp.org/learn/2022/responsive-web-design/), del apartado `Learn HTML Forms by Building a Registration Form` del portal [freeCodeCamp](https://www.freecodecamp.org/learn/).
5. Realizar los ejercicios del portal o aplicativo [Duolingo](https://www.duolingo.com/learn) de la `sección 10` del idioma `inglés`.