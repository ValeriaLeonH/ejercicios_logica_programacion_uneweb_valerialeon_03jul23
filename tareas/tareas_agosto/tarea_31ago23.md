# Tarea Jueves 31 de agosto

## teórica

1. Lea el artículo [Alignment](https://www.theodinproject.com/lessons/foundations-alignment) y diga en clases que conclusiones puede tener del artículo.

El articulo habla sobre alineacion de elementos dentro de un contenedor flexible o un flex container

2. Lea el artículo [Introduction](https://www.theodinproject.com/lessons/foundations-alignment#introduction) y diga en clases que conclusiones puede tener del artículo.

La introduccion habla de que usualmente hemos usado flex:1, sin embargo hay otros valores de flex que nos permiten tener un estilo diferente


3. Lea el artículo [Lesson overview](https://www.theodinproject.com/lessons/foundations-alignment#lesson-overview) y diga en clases que conclusiones puede tener del artículo.

Aprenderá cómo alinear elementos dentro de un contenedor flexible tanto vertical como horizontalmente.


4. Lea el artículo [Alignment](https://www.theodinproject.com/lessons/foundations-alignment#alignment) y diga en clases que conclusiones puede tener del artículo.

Para alinear un elemento dentro de un elemento container, podemos usar

- justify-content, que alinea los elementos a los largo del eje principal
- align-items, para cambiar la ubicación de los elementos a lo largo del eje transversal

NOTA
- cuando cambia flex-directiona column, justify-contentse alinea verticalmente y align-itemsse alinea horizontalmente

- Sin embargo, el comportamiento más común es el predeterminado, es decir, justify-contentalinea los elementos horizontalmente (porque el eje principal por defecto es horizontal) y align-itemslos alinea verticalmente. 

5. Lea el artículo [An Interactive Guide to Flexbox](https://www.joshwcomeau.com/css/interactive-guide-to-flexbox/) y diga en clases que conclusiones puede tener del artículo.

Para resumir lo que está sucediendo aquí:

flex-wrap: wrapnos da dos filas de cosas.
Dentro de cada fila, align-itemsdeslicemos a cada niño individual hacia arriba o hacia abajo.
Sin embargo, al alejarnos, tenemos estas dos filas dentro de un único contexto Flex. El eje transversal ahora cruzará dos filas, no una. Por lo tanto, no podemos mover las filas individualmente, debemos distribuirlas como un grupo .
Usando nuestras definiciones anteriores, estamos tratando con contenido , no con elementos . ¡Pero también seguimos hablando del eje transversal! Y entonces la propiedad que queremos es align-content.


6. Lea el artículo [Typical use cases of flexbox](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Flexible_Box_Layout/Typical_Use_Cases_of_Flexbox) y diga en clases que conclusiones puede tener del artículo.

GLOSARIO DE FLEXBOX

7. Lea el artículo [A Complete Guide to Flexbox](https://css-tricks.com/snippets/css/a-guide-to-flexbox/) y diga en clases que conclusiones puede tener del artículo.

HABLA DE:
- display: flex;
-   flex-direction: row | row-reverse | column | column-reverse;

  * row(predeterminado): de izquierda a derecha en ltr; de derecha a izquierda enrtl
  * row-reverse: de derecha a izquierda en ltr; de izquierda a derecha enrtl
  * column: igual que rowpero de arriba a abajo
  * column-reverse: igual que row-reversepero de abajo hacia arriba

-  flex-wrap: nowrap | wrap | wrap-reverse;

  * nowrap(predeterminado): todos los elementos flexibles estarán en una línea
  * wrap: los elementos flexibles se ajustarán en varias líneas, de arriba a abajo.
  * wrap-reverse: los elementos flexibles se ajustarán en varias líneas de abajo hacia arriba.

- flex-flow: column wrap;

- justify-content: flex-start | flex-end | center | space-between | space-around | space-evenly | start | end | left | right ... + safe | unsafe;

  * flex-start(predeterminado): los artículos se empaquetan hacia el inicio de la dirección flexible.
  * flex-end: los artículos se empaquetan hacia el final de la dirección flexible.
  * start: los artículos se empaquetan hacia el inicio de la writing-modedirección.
  * end: los artículos se empaquetan hacia el final de la writing-modedirección.
  * left: los elementos se empaquetan hacia el borde izquierdo del contenedor, a menos que eso no tenga sentido con flex-direction, entonces se comporta como start.
  * right: los artículos se empaquetan hacia el borde derecho del contenedor, a menos que eso no tenga sentido con flex-direction, entonces se comporta como end.
  * center: los elementos están centrados a lo largo de la línea
  * space-between: los artículos están distribuidos uniformemente en la línea; El primer elemento está en la línea de inicio, el último elemento en la línea de final.
  * space-around: los elementos se distribuyen uniformemente en la línea con el mismo espacio alrededor de ellos. Tenga en cuenta que visualmente los espacios no son iguales, ya que todos los elementos tienen el mismo espacio en ambos lados. El primer elemento tendrá una unidad de espacio contra el borde del contenedor, pero dos unidades de espacio entre el siguiente elemento porque ese siguiente elemento tiene su propio espacio que se aplica.
  * space-evenly: los elementos se distribuyen de modo que el espacio entre dos elementos cualesquiera (y el espacio hasta los bordes) sea igual.

- align-items: stretch | flex-start | flex-end | center | baseline | first baseline | last baseline | start | end | self-start | self-end + ... safe | unsafe;

  * stretch(predeterminado): estirar para llenar el contenedor (aún respetando el ancho mínimo/ancho máximo)
  * flex-start// start: self-startlos elementos se colocan al inicio del eje transversal. La diferencia entre estos es sutil, y se trata de respetar las flex-directionreglas o las writing-modereglas.
  * flex-end// end: self-endlos elementos se colocan al final del eje transversal. La diferencia nuevamente es sutil y se trata de respetar flex-directionreglas versus writing-modereglas.
  * center: los elementos están centrados en el eje transversal
  * baseline: los elementos están alineados, como se alinean sus líneas base

- align-content: flex-start | flex-end | center | space-between | space-around | space-evenly | stretch | start | end | baseline | first baseline | last baseline + ... safe | unsafe;

  * normal(predeterminado): los elementos se empaquetan en su posición predeterminada como si no se hubiera establecido ningún valor.
  * flex-start/ start: artículos embalados hasta el inicio del contenedor. El (más apoyado) flex-start honra el flex-direction mientras start honra la writing-modedirección.
  * flex-end/ end: artículos embalados hasta el final del contenedor. El (más apoyo) flex-endhonra el flex-directionmientras que el final honra la writing-modedirección.
  * center: artículos centrados en el contenedor
  * space-between: artículos distribuidos uniformemente; la primera línea está al inicio del contenedor mientras que la última está al final
  * space-around: elementos distribuidos uniformemente con el mismo espacio alrededor de cada línea
  * space-evenly: los elementos se distribuyen uniformemente con el mismo espacio a su alrededor
  * stretch: las líneas se estiran para ocupar el espacio restante

- gap, row-gap, column-gap

    gap: 10px;
    gap: 10px 20px; /* row-gap column gap */
    row-gap: 10px;
    column-gap: 20px;

8. Realiza todas las actividades de [Assignment](https://www.theodinproject.com/lessons/foundations-alignment#assignment) y diga en clases que conclusiones puede tener del artículo.


9. Responda las preguntas de [Knowledge check](https://www.theodinproject.com/lessons/foundations-alignment#knowledge-check) y diga en clases que conclusiones puede tener del artículo.

- ¿ Cuál es la diferencia entre justify-contenty align-items?

  justify-content: alineacion de elementos en el eje principal

  align-items: alineacion de elementos en el eje transversal

- ¿Cómo se usa flexbox para centrar completamente un div dentro de un contenedor flexible?

  con align-content

- ¿ Cuál es la diferencia entre justify-content: space-betweeny justify-content: space-around?

justify-content: space-between, da espacio entre los elementos, los elementos están distribuidos uniformemente en la línea;

justify-content: space-around,  los elementos se distribuyen uniformemente en la línea con el mismo espacio alrededor de ellos

10. Realiza todas las actividades de [Flexbox Froggy](https://flexboxfroggy.com/) y diga en clases que conclusiones puede tener del artículo.


11. Realiza todas las actividades de [Flexbox Zombies](https://mastery.games/flexboxzombies/) y diga en clases que conclusiones puede tener del artículo.


12. Lea el artículo [Basic concepts of flexbox](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Flexible_Box_Layout/Basic_Concepts_of_Flexbox) y diga en clases que conclusiones puede tener del artículo.

EJES DE FLEXBOX:

  EJE PRINCIPAL: tiene cuatro valores posibles:
    row --horizontal
    row-reverse --horizontal
    column --vertical
    column-reverse --vertical

  EJE TRANSVERSAL: 
  El eje transversal corre perpendicular al eje principal:
    row --corre hacia abajo por las columnas.
    row-reverse --corre hacia abajo por las columnas.
    column --entonces el eje transversal corre a lo largo de las filas.
    column-reverse --entonces el eje transversal corre a lo largo de las filas.

13. Lea el artículo [Aligning items in a flex container](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Flexible_Box_Layout/Aligning_Items_in_a_Flex_Container) y diga en clases que conclusiones puede tener del artículo.

USAMOS 
align-items: para alinear en el eje transversal
justify-content: para elinear a lo largo del eje principal

14. Vea el video [Complete Flexbox Tutorial with Cheat Sheet 2021 🎖️|| CSS Flex Box 2021](https://youtu.be/7YUR0Igl9eU?si=UMf6RXm5aDYHq-K-) y diga en clases que conclusiones puede tener del video.


15. Lea el artículo [CSS Flexbox Tutorial with Flexbox Properties Cheat Sheet 🎖️](https://www.freecodecamp.org/news/css-flexbox-tutorial-with-cheatsheet/) y diga en clases que conclusiones puede tener del artículo.

![Alt text](image.png)

16. Vea el video [Flexbox Crash Course 2022](https://m.youtube.com/watch?v=3YW65K6LcIA) y diga en clases que conclusiones puede tener del video.


17. Vea el video [Scrim on the justify-content property](https://scrimba.com/learn/flexbox/justify-content-flexbox-tutorial-cVWPacR) y diga en clases que conclusiones puede tener del video.


18. Vea el video [Scrim on the align-items property](https://scrimba.com/learn/flexbox/align-items-flexbox-tutorial-cJqymH9) y diga en clases que conclusiones puede tener del video.


19. Realiza todas las actividades de [Additional resources](https://www.theodinproject.com/lessons/foundations-alignment#additional-resources) y diga en clases que conclusiones puede tener del artículo.

## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).
2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).
3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).
4. Termine los retos plasmados en los ejercicios del `1` al `63` de [Responsive Web Design](https://www.freecodecamp.org/learn/2022/responsive-web-design/), del apartado `Learn HTML Forms by Building a Registration Form` del portal [freeCodeCamp](https://www.freecodecamp.org/learn/).
5. Realizar los ejercicios del portal o aplicativo [Duolingo](https://www.duolingo.com/learn) de la `sección 10` del idioma `inglés`.