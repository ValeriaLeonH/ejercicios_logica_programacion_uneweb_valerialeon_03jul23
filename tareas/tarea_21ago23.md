# Tarea Lunes HTML5 21 de agosto

## teórica

1. Lea el artículo [Intro to CSS](https://www.theodinproject.com/lessons/foundations-intro-to-css) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de :
-Agregue estilos a HTML con CSS.
-Comprender cómo usar los atributos de clase e ID.
-Agregue estilos a elementos específicos usando los selectores correctos.


2. Lea el artículo [Basic syntax](https://www.theodinproject.com/lessons/foundations-intro-to-css#basic-syntax) y diga en clases que conclusiones puede tener del artículo.

E articulo habla de que 
la sintaxis basica se compone de un selector, entrecorchetes la propiedad, dos puntos, el valory punto y coma

![Alt text](image-3.png)

3. Lea el artículo [Selectors](https://www.theodinproject.com/lessons/foundations-intro-to-css#selectors) y diga en clases que conclusiones puede tener del artículo.

Son los que se seleccina, hace referencia a los elementos HTML a los que se le aplican reglas css:

Selector universal: seleccionará elementos de cualquier tipo, y su sintaxis es un simple asterisco. 

Selector de tipo: seleccionará todos los elementos del tipo de elemento dado, y la sintaxis es solo el nombre del elemento

Selector de clase: seleccionarán todos los elementos con la clase dada, que es solo un atributo que coloca en un elemento HTML. Se escribe primero un punto, el nombre de la clase y entrecorchetes las propiedades

selectores de identificación: es mediante el atributo id, se coloca el hash # el valor del atributo id, y luego las propiedades, dentro de corchetes

El selector de grupos: cuando las propiedades se repiten en dos grupos, se hace colocan los selectores separados con una coma. EJ

.read,
.unread {
  color: white;
  background-color: black;
}

Selectores de encadenamiento: Otra forma de usar los selectores es encadenarlos como una lista sin ninguna separación, para que sea de dos tipo, .x1.x2 --> tienen que ser los dos, si solo es uno no cumple

4. Lea el artículo [Properties to get started with](https://www.theodinproject.com/lessons/foundations-intro-to-css#properties-to-get-started-with) y diga en clases que conclusiones puede tener del artículo.

PROPIEDADES: 

COLOR
-color: color del texto
-background-color: color de fondo
-existen colores como red y transparent

TIPOGRAFIA ALINEACION 
-font-family: fuente
-font-size: tamano de fuente
-font-weight: afecta a la negrita del texto, puede tener valor bold, 700, 100, etc
-text-align: coloca la alineacion del texto, ej center

ALTO Y ANCHO DE IMG
-height: alto
-width: ancho



5. Lea el artículo [CSS Legal Color Values](https://www.w3schools.com/cssref/css_colors_legal.php) y diga en clases que conclusiones puede tener del artículo.

-colores hexadecimales:
 #RRGGBB, RR (rojo), GG (verde) y BB (azul) 

-Colores hexadecimales con transparencia: Un color hexadecimal es: #RRGGBB. Para agregar transparencia, agregue dos dígitos adicionales entre 00 y FF.

-colores RGB: rgb(red, green, blue)

-colores RGBA: rgba(red, green, blue, alpha),Los valores de color RGBA son una extensión de los valores de color RGB con un canal alfa de 0.0 a 1, que especifica la opacidad del objeto.

-Colores HSL: hsl(hue, saturation, lightness), HSL significa tono, saturación y luminosidad, y representa una representación de colores en coordenadas cilíndricas.Ejemplo:  hsl(120, 100%, 50%)

-colores HSLA: hsla(hue, saturation, lightness, alpha), Los valores de color HSLA son una extensión de los valores de color HSL con un canal alfa, que especifica la opacidad del objeto.Ejemplo: hsla(120, 100%, 50%, 0.3)

-Nombres de colores predefinidos/entre navegadores: ya estan predeterminados, ejemplo green, red, blue, black

-con la currentcolor palabra clave: La currentcolor palabra clave se refiere al valor de la propiedad de color de un elemento.


6. Lea el artículo [Adding CSS to HTML](https://www.theodinproject.com/lessons/foundations-intro-to-css#adding-css-to-html) y diga en clases que conclusiones puede tener del artículo.

Para agregar un css a un html se puede relizar mediante tres pasos: 

1- CSS externo: cuando la hoja de estilo esta separada del index.html, se vincula mediante una etiqueta link con atributo href y  El rel atributo es obligatorio y especifica la relación entre el archivo HTML y el archivo vinculado.

2-El CSS interno: (o CSS incrustado) implica agregar el CSS dentro del propio archivo HTML en lugar de crear un archivo completamente separado.  Se coloca una etiqueta <style> dentro de una <head> y luego se colocan las propiedad:  (selector, llaves, declaraciones)

3-CSS en línea: permite agregar estilos directamente a los elementos HTML, aunque este método no es el recomendado, se colocan los estilos mediante un atributo style="propiedad: valor; propiedad: valor"

7. Realiza las actividades de [Assignment](https://www.theodinproject.com/lessons/foundations-intro-to-css#assignment) y diga en clases que conclusiones puede tener del artículo.


8. Responda las preguntas de [Knowledge check](https://www.theodinproject.com/lessons/foundations-intro-to-css#knowledge-check) y diga en clases que conclusiones puede tener del artículo.

-¿Cuál es la sintaxis de los selectores de clase e ID?

De selector: Se escribe primero un punto, el nombre de la clase y entrecorchetes las propiedades

de id: se coloca el hash # el valor del atributo id, y luego las propiedades, dentro de corchetes

-¿Cómo aplicaría una sola regla a dos selectores diferentes?

Se colocan los dos selectores separados con coma, luego se coloca como normalmente se hace, corchetes, propiedades con valores, punto y coma.

-Dado un elemento que tiene una identificación de title y una clase de primary, ¿cómo usaría ambos atributos para una sola regla?

#title, .primary{
  color: red;
}

-¿Qué hace el combinador descendiente?

Los combinadores nos permiten combinar varios selectores de forma diferente a agruparlos o encadenarlos, Un combinador descendiente solo hará que se seleccionen elementos que coincidan con el último selector si también tienen un antepasado 

Formula: 
.padre .hijo{
  propiedades:valor;
}

-¿Cuáles son los nombres de las tres formas de agregar CSS a HTML?

-css interno o incrustado
-css externo
-css en linea

-¿Cuáles son las principales diferencias entre las tres formas de agregar CSS a HTML?


-css interno o incrustado, se hace dentro del html
-css externo, en una hoja de estilos
-css en linea, en la misma linea como un atributo


9. Lea el artículo [CSS values and units](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Values_and_units) y diga en clases que conclusiones puede tener del artículo.

ES un glosario de css que habla de valores, unidades, dimensiones, imagenes, elementos de formulario, estilo de texto, depuracion, etc 

10. Lea el artículo [An interactive Scrim](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Values_and_units) y diga en clases que conclusiones puede tener del artículo.


11. Lea el artículo [Additional resources](https://www.theodinproject.com/lessons/foundations-intro-to-css#additional-resources) y diga en clases que conclusiones puede tener del artículo.

## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).
2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).
3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).
4. Termine los retos plasmados en los ejercicios del `1` al `63` de [Responsive Web Design](https://www.freecodecamp.org/learn/2022/responsive-web-design/), del apartado `Learn HTML Forms by Building a Registration Form` del portal [freeCodeCamp](https://www.freecodecamp.org/learn/).
5. Realizar los ejercicios del portal o aplicativo [Duolingo](https://www.duolingo.com/learn) de la `sección 10` del idioma `inglés`.