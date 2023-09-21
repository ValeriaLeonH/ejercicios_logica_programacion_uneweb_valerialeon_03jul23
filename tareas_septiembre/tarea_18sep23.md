# Tarea Lunes 18 de septiembre

## teórica

1. Lea el artículo [DOM Manipulation and Events](https://www.theodinproject.com/lessons/foundations-dom-manipulation-and-events) y diga en clases que conclusiones puede tener del artículo.

El articulo habla  sobre DOM y como se puede manipular con javascript, Las siglas DOM significan Document Object Model

2. Lea el artículo [Introduction](https://www.theodinproject.com/lessons/foundations-dom-manipulation-and-events#introduction) y diga en clases que conclusiones puede tener del artículo.

Una de las capacidades más singulares y útiles de JavaScript es su capacidad para manipular el DOM. en el articulo se habla de la definicion de DOM y como cambiarlo 

3. Lea el artículo [Lesson overview](https://www.theodinproject.com/lessons/foundations-dom-manipulation-and-events#lesson-overview) y diga en clases que conclusiones puede tener del artículo.

Explica qué es el DOM en relación con una página web.
Explique la diferencia entre un "nodo" y un "elemento".
Explique cómo apuntar a nodos con "selectores".
Explique los métodos básicos para buscar/agregar/eliminar y alterar nodos DOM.
Explique la diferencia entre una "lista de nodos" y una "matriz de nodos".
Explique qué es el “burbujeo” y cómo funciona.

4. Lea el artículo [DOM - Document Object Model](https://www.theodinproject.com/lessons/foundations-dom-manipulation-and-events#dom-document-object-model) y diga en clases que conclusiones puede tener del artículo.

El DOM (o modelo de objetos de documento) es una representación en forma de árbol del contenido de una página web: un árbol de "nodos" con diferentes relaciones dependiendo de cómo estén organizados en el documento HTML.

EN POCAS PALABRAS, ES COMO UN ARBOL GENEALOGICO, HAY ELEMENTOS PADRE Y ELEMENTOS HIJOS

5. Lea el artículo [Targeting nodes with selectors](https://www.theodinproject.com/lessons/foundations-dom-manipulation-and-events#targeting-nodes-with-selectors) y diga en clases que conclusiones puede tener del artículo.

Cuando trabaja con DOM, utiliza "selectores" para apuntar a los nodos con los que desea trabajar. Puede utilizar una combinación de selectores de estilo CSS y propiedades de relación para apuntar a los nodos que desee.

SELECTORES DE ESTILO CSS: <div class="display"></div>:

div.display
.display
#container > .display
div#container > div.display

PARA SELECTORES RELACIONALES CON PROPIEDADES ESPECIALES DE LOS NODOS: 

const container = document.querySelector('#container');
// selects the #container div (don't worry about the syntax, we'll get there)

console.dir(container.firstElementChild);                      
// selects the first child of #container => .display

const controls = document.querySelector('.controls');   
// selects the .controls div

console.dir(controls.previousElementSibling);                  
// selects the prior sibling => .display

6. Vea el video [DOM methods](https://www.theodinproject.com/lessons/foundations-dom-manipulation-and-events#dom-methods) y diga en clases que conclusiones puede tener del video.

EL ARTICULO HABLA DE LOS METODOS DOM:

- SELECTORES DE CONSULTA:
  * element.querySelector(selector)- devuelve una referencia a la primera coincidencia del selector .
  * element.querySelectorAll(selectors)- devuelve una "lista de nodos" que contiene referencias a todas las coincidencias de los selectores .
  Es importante tener en cuenta que cuando se utiliza querySelectorAll, el valor de retorno no es una matriz. Parece una matriz y en cierto modo actúa como una matriz, pero en realidad es una "lista de nodos". 

- CREACION DE ELEMENTOS DOM EN LA MEMORIA: 
  document.createElement(tagName, [options])- crea un nuevo elemento de tipo etiqueta tagName. [options]en este caso significa que puede agregar algunos parámetros opcionales a la función. 

- AGREGAR ELEMENTOS:
  * parentNode.appendChild(childNode)- agrega childNode como el último hijo de parentNode .
  * parentNode.insertBefore(newNode, referenceNode)- inserta newNode en parentNode antes de referenceNode .

- ELIMINAR ELEMENTOS:
  * parentNode.removeChild(child)- elimina el niño de parentNode en el DOM y devuelve una referencia al niño .

- ALTERAR ELEMENTOS: Cuando tiene una referencia a un elemento, puede usar esa referencia para alterar las propiedades propias del elemento. Esto le permite realizar muchas modificaciones útiles, como agregar/eliminar y alterar atributos, cambiar clases, agregar información de estilo en línea y más.

const div = document.createElement('div');                     
// creates a new div referenced in the variable 'div'

- AGREGAR ESTILO EN LINEA: 
  div.style.cssText = 'color: blue; background: white;';          // adds several style rules

- EDITAR ATRIBUTOS: 
    div.setAttribute('id', 'theDiv');                              
  // if id exists, update it to 'theDiv', else create an id
  // with value "theDiv"

  div.getAttribute('id');                                        
  // returns value of specified attribute, in this case
  // "theDiv"

  div.removeAttribute('id');                                     
  // removes specified attribute

- TRABAJANDO CON CLASES 
    div.classList.add('new');                                      
  // adds class "new" to your new div

  div.classList.remove('new');                                   
  // removes "new" class from div

  div.classList.toggle('active');                                
  // if div doesn't have class "active" then add it, or if
  // it does, then remove it

- AGREGAR CONTENIDO DE TEXTO 
   con:   div.textContent = 'Hello World!'   

- AGREGAR CONTENIDO HTML:
  con:    div.textContent = 'Hello World!'   

- AGREGAR CONTENIDO HTML 
  con:    div.innerHTML = '<span>Hello World!</span>'; 

7. Vea el video [Spread syntax](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Spread_syntax) y diga en clases que conclusiones puede tener del video.

EL ARTICULO HABLA DE SINTAXIS SPREAD: permite a un elemento iterable tal como un arreglo o cadena ser expandido en lugares donde cero o más argumentos (para llamadas de función) o elementos (para Array literales)

  - SINTAXIS 
    * Para llamadas de funciones: 
     myFunction(...iterableObj);
    * Para arreglos literales o cadenas de caracteres:
     [...iterableObj, '4', 'five', 6];
    * Para objetos literales (nuevo en ECMAScript 2018):
      let objClone = { ...obj };

  - APPLY: Es frecuente usar Function.prototype.apply en casos donde quieres usar los elementos de un arreglo como argumentos de una función.

        function myFunction(x, y, z) {}
        var args = [0, 1, 2];
        myFunction.apply(null, args);

  - NEW: Cuando se llama un constructor con new, no es posible usar directamente un arreglo y apply( applyhace un [[Call]]y no un [[Construct]]). Sin embargo, un arreglo puede ser fácilmente usado con un nuevo gracias a la sintáxis expandida:
      
      var dateFields = [1970, 0, 1]; // 1 Jan 1970
      var d = new Date(...dateFields);

- EXPANDIR LITERALES DE MATRIZ: Sin sintaxis expandida (spread syntax), para crear un nuevo arreglo usando un arreglo existente como parte de él, no es suficiente la sintaxis de Array literal y en su lugar se debe usar código imperativo con una combinación de , , , etc. Con la sintaxis expandida, pushesto splicese concatvuelve mucho más práctico:

    var parts = ["shoulders", "knees"];
    var lyrics = ["head", ...parts, "and", "toes"];
    // ["head", "shoulders", "knees", "and", "toes"]

- CONCATENAR ARREGLOS:  Array.concat se usa a menudo para concatenar un arreglo al final de un arreglo ya existente. Sin la sintaxis difundida se realiza:

      var arr1 = [0, 1, 2];
      var arr2 = [3, 4, 5];
      // Append all items from arr2 onto arr1
      arr1 = arr1.concat(arr2);

  * Array.unshift es a menudo usado para insertar un arreglo de valores al inicio de un arreglo existente. Sin la sintáxis difundida, esto es hecho como:

      var arr1 = [0, 1, 2];
      var arr2 = [3, 4, 5];
      // Prepend all items from arr2 onto arr1
      Array.prototype.unshift.apply(arr1, arr2); // arr1 is now [3, 4, 5, 0, 1, 2] 

- DIFUNDIR LITERALES TIPO OBJETO: La clonación superficial (excluyendo el prototipo) o la combinación de objetos ahora es posible usando una sintaxis más corta que Object.assign().

8. Lea el artículo [6.2 Getting, setting, & removing individual inline CSS properties](https://domenlightenment.com/#6.2) y diga en clases que conclusiones puede tener del artículo.

  EL ARTICULO HABLA DE Obtener, configurar y eliminar propiedades CSS en línea individuales 

  * Los nombres de propiedades contenidos en el objeto de estilo no contienen el guión normal que se utiliza en los nombres de propiedades CSS. La traducción es bastante simple. Elimine el guión y utilice mayúsculas y minúsculas camello. (por ejemplo, tamaño de fuente = tamaño de fuente o imagen de fondo = imagen de fondo ). En el caso de que el nombre de una propiedad CSS sea una palabra clave de JavaScript, el nombre de la propiedad CSS de JavaScript tiene el prefijo "css" (por ejemplo, float = cssFloat ).

  * Las propiedades de mano corta también están disponibles como propiedades. Por lo tanto, no solo puede configurar el margen , sino también el margenTop .

  * Recuerde incluir para cualquier valor de propiedad CSS que requiera una unidad de medida la unidad apropiada (por ejemplo, style.width = '300px'; no style.width = '300'; ). Cuando un documento se representa en modo estándar, se requiere la unidad de medida o se ignorará. En el modo peculiar, se hacen suposiciones si no se incluye la unidad de medida.

9. Lea el artículo [HTML attribute reference](https://developer.mozilla.org/en-US/docs/Web/HTML/Attributes) y diga en clases que conclusiones puede tener del artículo.

ES COMO UN DICCIONARIO O UNA GUIA DE REFERENCIAS DE ATRIBUTOS DE HTML , ejemplo class

10. Vea el video [How To Prevent The Most Common Cross Site Scripting Attack](https://www.youtube.com/watch?v=ns1LX6mEvyM&ab_channel=WebDevSimplified) y diga en clases que conclusiones puede tener del video.

EL VIDEO HABLA DE COMO Cómo prevenir el ataque de secuencias de comandos entre sitios más común

Las secuencias de comandos entre sitios son una de las formas más comunes en que un pirata informático intentará infiltrarse en un sitio web. Hay muchas formas diferentes de secuencias de comandos entre sitios, pero la causa más común de secuencias de comandos entre sitios es el uso del método JavaScript InnerHTML con la entrada del usuario. Se debe escapar cualquier forma de entrada del usuario antes de usarla con InnerHTML, y cualquier uso de InnerHTML debe pensarse minuciosamente para garantizar que ninguna entrada del usuario pueda pasar sin ser desinfectada. Es un error muy fácil de cometer, pero afortunadamente la solución también es igual de fácil

11. Lea el artículo [What's in the head? Metadata in HTML](https://developer.mozilla.org/en-US/docs/Learn/HTML/Introduction_to_HTML/The_head_metadata_in_HTML#applying_css_and_javascript_to_html) y diga en clases que conclusiones puede tener del artículo.

el head de un documento HTML es la parte que no se muestra en el navegador web cuando se carga la página. Contiene información como la página <title>, enlaces a CSS (si elige diseñar su contenido HTML con CSS), enlaces a favicons personalizados y otros metadatos (datos sobre el HTML, como el autor y palabras clave importantes que describen el documento). ). Los navegadores web utilizan la información contenida en el head para representar el documento HTML correctamente. En este artículo cubriremos todo lo anterior y más, para brindarle una buena base para trabajar con marcado.

12. Lea el artículo [Exercise](https://www.theodinproject.com/lessons/foundations-dom-manipulation-and-events#exercise) y diga en clases que conclusiones puede tener del artículo.




13. Lea el artículo [Events](https://www.theodinproject.com/lessons/foundations-dom-manipulation-and-events#events) y diga en clases que conclusiones puede tener del artículo.

  Los eventos son acciones que ocurren en su página web, como clics del mouse o pulsaciones de teclas, y usando JavaScript podemos hacer que nuestra página web escuche y reaccione a estos eventos.

  Hay tres formas principales de hacerlo: puede especificar atributos de función directamente en sus elementos HTML, puede establecer propiedades de formulario on[eventType]( onclick, onmousedownetc.) en los nodos DOM en su JavaScript o puede adjuntar detectores de eventos al DOM.

  EJEMPLO DE LOS 3 METODOS

  1. METODO 1: Esta solución no es ideal porque estamos saturando nuestro HTML con JavaScript. Además, solo podemos establecer una propiedad "onclick" por elemento DOM, por lo que no podemos ejecutar múltiples funciones separadas en respuesta a un evento de clic usando este método.

    <button onclick="alert('Hello World')">Click Me</button>
  
  2. METODO 2: Hemos sacado el JS del HTML y lo hemos colocado en un archivo JS, pero todavía tenemos el problema de que un elemento DOM solo puede tener 1 propiedad "onclick".
    -----------------------
    <!-- the HTML file -->
    <button id="btn">Click Me</button>
    --------------------------
    // the JavaScript file
      const btn = document.querySelector('#btn');
      btn.onclick = () => alert("Hello World");

  3. METODO 3: Ahora mantenemos la separación de preocupaciones y también permitimos múltiples EventListener si surge la necesidad. El método 3 es mucho más flexible y potente, aunque es un poco más complejo de configurar.
  -------------------------
  <!-- the HTML file -->
  <button id="btn">Click Me Too</button>
  --------------------------- 
  // the JavaScript file
  const btn = document.querySelector('#btn');
  btn.addEventListener('click', () => {
    alert("Hello World");
  });
  -----------------------------------------

14. Lea el artículo [Arrow functions, the basics](https://javascript.info/arrow-functions-basics) y diga en clases que conclusiones puede tener del artículo.

HABLA DE LAS FUNCIONES FLECHAS

Existe otra sintaxis muy simple y concisa para crear funciones, que suele ser mejor que las expresiones de funciones.

Se llama "funciones de flecha" porque tiene este aspecto:

let func = (arg1, arg2, ..., argN) => expression;

Esto crea una función funcque acepta argumentos arg1..argN, luego evalúa el expressionlado derecho con su uso y devuelve su resultado.

EJEMPLO
 let sum = (a, b) => a + b;
 alert( sum(1, 2) );

15. Lea el artículo [Understanding Callbacks](https://dev.to/i3uckwheat/understanding-callbacks-2o9e) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA DE Comprender las devoluciones de llamada: las devoluciones de llamada son funciones que se pasan a otra función como argumento. 

-  FUNCIONES NORMALES:
  function nombre(parametros) {
    if (isWhiteBoy) {
    console.log('Play: ' +  music);
    }
  }

- FUNCIONES ANONIMAS: SON LAS QUE NO TIENEN NOMBRE

- FUNCIONES FLECHA: 
      let sum = (a, b) => {  /
      let result = a + b;
      return result; 
      };

- Cómo funcionan las devoluciones de llamada, pueden ser: 

  1. Funciones de iterador

  2. Event Listeners (DOM):

16. Lea el artículo [HTML DOM Events](https://www.w3schools.com/jsref/dom_obj_event.asp) y diga en clases que conclusiones puede tener del artículo.

ES UNA GUIA DE EVENTOS DE DOM HTML

17. Vea los videos [Make a JavaScript Drum Kit in Vanilla JS!](https://www.youtube.com/watch?v=VuN8qwZoego&list=PLu8EoSxDXHP6CGK4YVJhL_VWetA865GOH&ab_channel=WesBos) y diga en clases que conclusiones puede tener del videos.


18. Lea el artículo [KeyboardEvent: keyCode property](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/keyCode) y diga en clases que conclusiones puede tener del artículo.


19. Lea el artículo [KeyboardEvent: code property](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/code) y diga en clases que conclusiones puede tener del artículo.


20. Vea el video [JavaScript Event Capture, Propagation and Bubbling](https://www.youtube.com/watch?v=F1anRyL37lE&ab_channel=WesBos) y diga en clases que conclusiones puede tener del video.


21. Realiza todas las actividades de [Assignment](https://www.theodinproject.com/lessons/foundations-dom-manipulation-and-events#assignment) y diga en clases que conclusiones puede tener del artículo.


22. Responda las preguntas de [Knowledge check](https://www.theodinproject.com/lessons/foundations-dom-manipulation-and-events#knowledge-check) y diga en clases que conclusiones puede tener del artículo.


23. Lea el artículo [The Document Object Model](https://eloquentjavascript.net/14_dom.html) y diga en clases que conclusiones puede tener del artículo.


24. Lea el artículo [Handling Events](https://eloquentjavascript.net/15_event.html) y diga en clases que conclusiones puede tener del artículo.


25. Lea el artículo [DOM Enlightenment](https://domenlightenment.com/) y diga en clases que conclusiones puede tener del artículo.


26. Lea el artículo [Plain JavaScript](https://plainjs.com/javascript/) y diga en clases que conclusiones puede tener del artículo.


27. Lea el artículo [The HTML DOM (Document Object Model)](https://www.w3schools.com/js/js_htmldom.asp) y diga en clases que conclusiones puede tener del artículo.


28. Vea los videos [JS DOM Crash Course](https://www.youtube.com/watch?v=0ik6X4DJKCc&list=PLillGF-RfqbYE6Ik_EuXA2iZFcE082B3s) y diga en clases que conclusiones puede tener del videos.


29. Lea el artículo [Understanding the DOM — Document Object Model](Understanding the DOM — Document Object Model) y diga en clases que conclusiones puede tener del artículo. 


30. Lea el artículo [Introduction to events](https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Building_blocks/Events) y diga en clases que conclusiones puede tener del artículo.


31. Realiza todas las actividades de [Additional resources](https://www.theodinproject.com/lessons/foundations-dom-manipulation-and-events#additional-resources) y diga en clases que conclusiones puede tener del artículo.

## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).
2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).
3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).
4. Termine los retos plasmados en los ejercicios del `1` al `63` de [Responsive Web Design](https://www.freecodecamp.org/learn/2022/responsive-web-design/), del apartado `Learn HTML Forms by Building a Registration Form` del portal [freeCodeCamp](https://www.freecodecamp.org/learn/).
5. Realizar los ejercicios del portal o aplicativo [Duolingo](https://www.duolingo.com/learn) de la `sección 10` del idioma `inglés`.