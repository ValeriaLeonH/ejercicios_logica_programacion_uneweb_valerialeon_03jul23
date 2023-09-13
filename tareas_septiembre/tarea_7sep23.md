# Tarea Jueves 07 de septiembre

## teórica

1. Lea el artículo [Fundamentals Part 3](https://www.theodinproject.com/lessons/foundations-fundamentals-part-3) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA DE LA PARTE 3 DE LOS FUNDAMENTOS DE JAVASCRIPT

2. Lea el artículo [Introduction](https://www.theodinproject.com/lessons/foundations-fundamentals-part-3#introduction) y diga en clases que conclusiones puede tener del artículo.

HABLA DE QUE EN ESTA LECCION APRENDEREMOS SOBRE LAS FUNCIONES, QUE SON PEQUENOS PAQUETES QUE SE PUEDEN USAR UNA Y OTRA VEZ, SIN TENER QUE CAMBIAR EL CODIGO 


3. Lea el artículo [Lesson overview](https://www.theodinproject.com/lessons/foundations-fundamentals-part-3#lesson-overview) y diga en clases que conclusiones puede tener del artículo.

Cómo definir e invocar diferentes tipos de funciones.
Cómo utilizar el valor de retorno.
Qué alcance de función es.

4. Lea el artículo [Functions — reusable blocks of code](https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Building_blocks/Functions) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA DE:

  Prácticamente cada vez que utiliza una estructura de JavaScript que incluye un par de paréntesis, y no() está utilizando una estructura de lenguaje incorporada común como un bucle for , while o do... while , o if... else declaración , estás haciendo uso de una función.

- FUNCIONES DEL NAVEGADOR INTEGRADAS
  Hemos utilizado mucho las funciones integradas en el navegador en este curso.
  Cada vez que manipulamos una cadena de texto, cada vez que manipulamos una matriz O cada vez que generamos un número aleatorio:


- FUNCIONES VERSUS METODOS
  Las funciones que forman parte de objetos se llaman métodos

- INVOCAR FUNCIONES
   Esto se hace incluyendo el nombre de la función en algún lugar del código, seguido de paréntesis.

- PARAMETROS DE FUNCION 
  Algunas funciones requieren que se especifiquen parámetros cuando las invoca; estos son valores que deben incluirse dentro de los paréntesis de la función, que necesita para hacer su trabajo correctamente.

- PARAMETROS OPCIONALES 
 los parámetros son opcionales; no es necesario especificarlos. 

- PARAMETROS PREDETERMINADOS
  Si está escribiendo una función y desea admitir parámetros opcionales, puede especificar valores predeterminados agregando =después del nombre del parámetro, seguido del valor predeterminado

- FUNCIONES ANONIMAS Y FUNCIONES DE FLECHA
  función anónima porque no tiene nombre. A menudo verás funciones anónimas cuando una función espera recibir otra función como parámetro.

- ALCANCE DE LA FUNCION Y CONFLICTOS
  Cuando crea una función, las variables y otras cosas definidas dentro de la función están dentro de su propio alcance separado , lo que significa que están encerradas en sus propios compartimentos separados, inalcanzables desde el código externo a las funciones.

  1. El nivel superior fuera de todas sus funciones se llama alcance global . Los valores definidos en el alcance global son accesibles desde cualquier parte del código.
  

5. Lea el artículo [Functions — reusable blocks of code](https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Building_blocks/Functions) y diga en clases que conclusiones puede tener del artículo.

REPETIDO 

6. Lea el artículo [Function return values](https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Building_blocks/Return_values) y diga en clases que conclusiones puede tener del artículo.

- LOS VALORES DE RETORNO: Los valores de retorno son exactamente lo que parecen: los valores que devuelve una función cuando se completa.

- USAR VALORES DE RETORNO EN SUS PROPIAS FUNCIONES: 
  Dentro de cada iteración del bucle, se realizan tres llamadas a la función para generar un valor aleatorio para la coordenada x , la coordenada y y el radiorandom() del círculo actual , respectivamente.

7. Vea el video [Functions](https://javascript.info/function-basics) y diga en clases que conclusiones puede tener del video.

El articulo habla de Funciones:

- Las funciones son los principales "bloques de construcción" del programa. Permiten llamar al código muchas veces sin repetición.

- COMO DECLARAR FUNCIONES:  
  Esto se hace incluyendo el nombre de la función en algún lugar del código, seguido de paréntesis, colocar los parametros y luego el body/ o accion que se quiere llevar a cabo

  function showMessage() {
    alert( 'Hello everyone!' );
  }

  showMessage();
  showMessage();

- VARIABLES LOCALES: Una variable declarada dentro de una función sólo es visible dentro de esa función.ejemplo:

  function showMessage() {
    let message = "Hello, I'm JavaScript!"; // local variable

    alert( message );
  }

  showMessage(); // Hello, I'm JavaScript!

  alert( message ); // <-- Error! The variable is local to the function

- VARIABLES EXTERNAS: Un, La función tiene acceso completo a la variable externa. También puede modificarlo.

    let userName = 'John';

  function showMessage() {
    userName = "Bob"; // (1) changed the outer variable

    let message = 'Hello, ' + userName;
    alert(message);
  }

  alert( userName ); // John before the function call

  showMessage();

  alert( userName ); // Bob, the value was modified by the function

NOTAS:
Las variables declaradas fuera de cualquier función, como la externa userNameen el código anterior, se denominan globales .

Las variables globales son visibles desde cualquier función (a menos que estén ocultas por las locales).

Es una buena práctica minimizar el uso de variables globales. El código moderno tiene pocos o ningún global. La mayoría de las variables residen en sus funciones. Sin embargo, a veces pueden resultar útiles para almacenar datos a nivel de proyecto.

- PARAMETROS : Podemos pasar datos arbitrarios a funciones usando parámetros.
Un parámetro es la variable que figura entre paréntesis en la declaración de función (es un término de tiempo de declaración).

- VALORES PREDETERMINADOS: Si se llama a una función, pero no se proporciona un argumento, entonces el valor correspondiente se convierte en undefined.

8. Lea el artículo [Function expressions](https://javascript.info/function-expressions) y diga en clases que conclusiones puede tener del artículo.

-Las funciones son valores. Se pueden asignar, copiar o declarar en cualquier lugar del código.
-Si la función se declara como una declaración separada en el flujo de código principal, eso se denomina "Declaración de función".
-Si la función se crea como parte de una expresión, se denomina "Expresión de función".
-Las declaraciones de funciones se procesan antes de ejecutar el bloque de código. Son visibles en todas partes del bloque.
-Las expresiones de función se crean cuando el flujo de ejecución las alcanza.

En la mayoría de los casos, cuando necesitamos declarar una función, es preferible una Declaración de función, porque es visible antes de la declaración misma. Eso nos da más flexibilidad en la organización del código y, por lo general, es más legible.

Por lo tanto, debemos usar una expresión de función solo cuando una declaración de función no sea adecuada para la tarea. Hemos visto un par de ejemplos de eso en este capítulo y veremos más en el futuro.

9. Lea el artículo [Arrow functions, the basics](https://javascript.info/arrow-functions-basics) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA DE LO BASICO DE ARROW FUNCTIONS, o su traduccion funciones de flecha:

- ES una forma muy simple de crear funciones: tiene este aspecto 
  let func = (arg1, arg2, ..., argN) => expression; 

  Esto crea una función funcque acepta argumentos arg1..argN, luego evalúa el expressionlado derecho con su uso y devuelve su resultado.

  es la version corta de :
  
  let func = function(arg1, arg2, ..., argN) {
  return expression;
  };

  * FUNCIONES DE FLECHA MULTILINEA:  En ese caso, podemos encerrarlos entre llaves. La principal diferencia es que las llaves requieren un returndentro de ellas para devolver un valor (tal como lo hace una función normal). EJEMPLO:

    let sum = (a, b) => {  // the curly brace opens a multiline function
    let result = a + b;
    return result; // if we use curly braces, then we need an explicit "return"
    };

  ES DECIR 

  * Sin llaves: (...args) => expression– el lado derecho es una expresión: la función la evalúa y devuelve el resultado. Los paréntesis se pueden omitir si solo hay un argumento, por ejemplo n => n*2.

  * Con llaves: (...args) => { body }– los corchetes nos permiten escribir múltiples declaraciones dentro de la función, pero necesitamos algo explícito returnpara devolver algo.


10. Vea el video [JavaScript Call Stack](https://www.javascripttutorial.net/javascript-call-stack/) y diga en clases que conclusiones puede tener del video.

EL ARTICULO HABLA DE JavaScript Call Stack:

- es una forma que tiene el motor JavaScript de realizar un seguimiento de su lugar en el código que llama a múltiples funciones.

- El motor JavaScript utiliza una pila de llamadas para gestionar los contextos de ejecución.

- La pila de llamadas utiliza la estructura de datos de la pila que funciona según el principio LIFO (último en entrar, primero en salir)

11. Lea el artículo [Functions](https://www.theodinproject.com/lessons/foundations-fundamentals-part-3#functions) y diga en clases que conclusiones puede tener del artículo.


12. Realiza todas las actividades de [Assignment](https://www.theodinproject.com/lessons/foundations-fundamentals-part-3#assignment) y diga en clases que conclusiones puede tener del artículo.


13. Responda las preguntas de [Knowledge check](https://www.theodinproject.com/lessons/foundations-fundamentals-part-3#knowledge-check) y diga en clases que conclusiones puede tener del artículo.

- ¿Para qué sirven las funciones?
Permite hacer una accion varias veces a lo largo del codigo, llamdo la funcion

- ¿Cómo se invoca una función?
Fuera de la funcion debemos colocar let result = nombre_dela_funcion(o_que_se_quiera_evaluar);
return result;

- ¿Qué son las funciones anónimas?
SOn las que no tiene nombre 

- ¿Qué es el alcance de la función?
pueden tener alcance local  dentro de la funcion o global, fuera de la funcion 

- ¿Qué son los valores de retorno?
Son los valores que retornan o se devuelven 

- ¿Qué son las funciones de flecha?
Son funciones muy simplificadas, en vez de ser de multilinea, estan escritas en una sola linea

14. Lea el artículo [What is the difference between "let" and "var"?](https://stackoverflow.com/questions/762011/what-is-the-difference-between-let-and-var#:~:text=The%20main%20difference%20is%20scoping,(hence%20the%20block%20scope)) y diga en clases que conclusiones puede tener del artículo.

HABLA DE LAS DIFERENCIAS DE LET Y VAR 

La principal diferencia son las reglas de alcance. Las variables declaradas por varpalabra clave tienen como alcance el cuerpo de la función inmediata (de ahí el alcance de la función), mientras que letlas variables tienen como alcance el bloque circundante{ } inmediato indicado por (de ahí el alcance del bloque).

15. Vea el videos [How JavaScript Code is executed? ❤️& Call Stack | Namaste JavaScript Ep. 2](https://www.youtube.com/watch?v=iLWTnMzWtj4&ab_channel=AkshaySaini) y diga en clases que conclusiones puede tener del video.



16. Realiza todas las actividades de [Additional resources](https://www.theodinproject.com/lessons/foundations-fundamentals-part-3#additional-resources) y diga en clases que conclusiones puede tener del artículo.

## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).
2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).
3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).
4. Termine los retos plasmados en los ejercicios del `1` al `63` de [Responsive Web Design](https://www.freecodecamp.org/learn/2022/responsive-web-design/), del apartado `Learn HTML Forms by Building a Registration Form` del portal [freeCodeCamp](https://www.freecodecamp.org/learn/).
5. Realizar los ejercicios del portal o aplicativo [Duolingo](https://www.duolingo.com/learn) de la `sección 10` del idioma `inglés`.