# Tarea Martes HTML5 22 de agosto

## teórica

1. Lea el artículo [The Cascade](https://www.theodinproject.com/lessons/foundations-the-cascade) y diga en clases que conclusiones puede tener del artículo.

EL articulo habla de Lo que hace la cascada,
Especificidad y combinación de selectores CSS y 
Cómo afecta la herencia a ciertas propiedades.

2. Lea el artículo [The cascade of CSS](https://www.theodinproject.com/lessons/foundations-the-cascade#the-cascade-of-css) y diga en clases que conclusiones puede tener del artículo.

La cascada es lo que determina qué reglas se aplican realmente a nuestro HTML y tiene las siguientes caracteristicas:

1. Especificidad: Una declaración CSS que sea más específica prevalecerá sobre las menos específicas.

  1. 1. Selectores de ID (selector más específico)
  1. 2. selectores de clase
  1. 3. Selectores de tipo

  REGLAS DE ESPECIFICIDAD: 
  - EL que tiene mas selectores de clases es el que tiene mas prioridad
  - El que tiene id tiene mayor prioridad que el que tiene class
  - Se puede dar el caso que sea un selector de clase y uno de id, como tiene mas selectores que el otro selector, la prioridad es el que tenga mas selectores 
  - Al comparar selectores, es posible que encuentre símbolos especiales para el selector universal ( *), así como combinadores ( +, ~, >y un espacio vacío). Estos símbolos no añaden ninguna especificidad en sí mismos.

2. Herencia: cuando se aplican a un elemento, son heredadas por los descendientes de ese elemento

3. orden de las reglas: 


3. Lea el artículo [CSS Fonts](https://www.w3schools.com/Css/css_font.asp) y diga en clases que conclusiones puede tener del artículo.

Hablan de las fuentes en css
- font-family: fuentes
- Hablan de font-familys comunes ejemplo serif
- Nota : si el nombre de la fuente es más de una palabra, debe estar entre comillas, como: "Times New Roman".

4. Lea el artículo [CSS Web Safe Fonts](https://www.w3schools.com/cssref/css_websafe_fonts.php) y diga en clases que conclusiones puede tener del artículo.

Hablan de las fuentes mas seguras para usar en webs:
-Arial (sans-serif)
-Verdana (sans-serif)
-Tahoma (sans-serif)
-Trebuchet MS (sans-serif)
-Times New Roman (serif)
-Georgia (serif)
-Garamond (serif)
-Courier New (monospace)
-Brush Script MT (cursive)

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

6. Realiza las actividades de [Assignment](https://www.theodinproject.com/lessons/foundations-intro-to-css#assignment) y diga en clases que conclusiones puede tener del artículo.


7. Responda las preguntas de [Knowledge check](https://www.theodinproject.com/lessons/foundations-the-cascade#knowledge-check) y diga en clases que conclusiones puede tener del artículo.

Entre una regla que usa un selector de clase y una regla que usa tres selectores de tipo, ¿qué regla tiene la mayor especificidad?

Tiene mayor especificidad el de tres electores de tipo, ya que sal ser mas selectores que el otro selector, se le da prioridad

8. Lea el artículo [Additional resources](https://www.theodinproject.com/lessons/foundations-the-cascade#additional-resources) y diga en clases que conclusiones puede tener del artículo.

## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).
2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).
3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).
4. Termine los retos plasmados en los ejercicios del `1` al `63` de [Responsive Web Design](https://www.freecodecamp.org/learn/2022/responsive-web-design/), del apartado `Learn HTML Forms by Building a Registration Form` del portal [freeCodeCamp](https://www.freecodecamp.org/learn/).
5. Realizar los ejercicios del portal o aplicativo [Duolingo](https://www.duolingo.com/learn) de la `sección 10` del idioma `inglés`.