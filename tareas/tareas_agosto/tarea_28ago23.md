# Tarea Viernes HTML5 25 de agosto

## teórica

1. Lea el artículo [Introduction to Flexbox](https://www.theodinproject.com/lessons/foundations-block-and-inline) y diga en clases que conclusiones puede tener del artículo.


2. Lea el artículo [History of CSS Grid and CSS Flexbox](https://medium.com/@BennyOgidan/history-of-css-grid-and-css-flexbox-658ae6cfe6d2) y diga en clases que conclusiones puede tener del artículo.

- Grupo de Trabajo CSS había propuesto la idea de un diseño Flex en 2008 y publicó el primer borrador de trabajo en 2009,  se basó en XUL

- Segun Tab Atkins Jr, dijo que esto estaba lamentablemente poco especificado, entonces, En 2011, Atkins entró y reescribió todas las especificaciones de flexbox. su principal objetivo era intentar eliminar las dependencias de todos los trucos locos de flotación/tabla/bloque en línea/etc. que tenía que dominar como desarrollador web

- En 2013, Atkins reescribió el borrador de un editor para adaptarse a algunas especificaciones nuevas,  hizo una mejor factorización de la capacidad de Flexbox, reforzó el algoritmo y aumentó la eficiencia de Flexbox.

- Para CSS grid, esto fue introducido inicialmente por Microsoft con una propuesta que presentaron al Grupo de Trabajo de CSS.

-  Pero ninguno de estos llegó a ningún navegador a pesar del entusiasmo por estas ofertas, Advanced Layout Module (2005), que más tarde se convirtió en Template Layout Module.

3. Lea el artículo [Introduction](https://www.theodinproject.com/lessons/foundations-introduction-to-flexbox#introduction) y diga en clases que conclusiones puede tener del artículo.

Flexbox es la forma predeterminada de posicionar elementos para muchos desarrolladores.

4. Lea el artículo [Lesson overview](https://www.theodinproject.com/lessons/foundations-introduction-to-flexbox#lesson-overview) y diga en clases que conclusiones puede tener del artículo.

-Aprenderá cómo posicionar elementos usando flexbox.
-Aprenderá sobre contenedores flexibles y artículos flexibles.
-Aprenderá a crear componentes y diseños útiles que van más allá de simplemente apilar y centrar elementos.

5. Lea el artículo [Before we get started](https://www.theodinproject.com/lessons/foundations-introduction-to-flexbox#before-we-get-started) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de que es importante aprender sobre flexbox, dice que debemos revisar bien las lecciones y hacer muchos ejemplos

FLEX CONTAINERS AND FLEX ITEMS o Contenedores flexibles y artículos flexibles:

- Un contenedor flexible es cualquier elemento que tenga display: flex

- Un elemento flexible es cualquier elemento que se encuentra directamente dentro de un contenedor flexible.

Con esto se pueden hacer disenos complejos 

6. Lea el artículo [Let’s flex!](https://www.theodinproject.com/lessons/foundations-introduction-to-flexbox#lets-flex) y diga en clases que conclusiones puede tener del artículo.

FLEXBOX es una forma de organizar elementos en filas o columnas. Estos elementos se flexionarán (es decir, crecerán o se reducirán) según algunas reglas simples que usted puede definir

7. Lea el artículo [Let’s flex!](https://www.theodinproject.com/lessons/foundations-introduction-to-flexbox#lets-flex) y diga en clases que conclusiones puede tener del artículo.

REPETIDO 

8. Responda las preguntas de [Knowledge check](https://www.theodinproject.com/lessons/foundations-introduction-to-flexbox#knowledge-check) y diga en clases que conclusiones puede tener del artículo.

-¿Cuál es la diferencia entre un contenedor flexible y un artículo flexible?
El contenedor flexible (tiene display: flex;) contiene al elemento flexible

-¿Cómo se crea un elemento flexible? colocando varios div, h, etc (elementos flex) dentro de un div container (en contenedor flex) 

9. Lea el artículo [flexbox](https://internetingishard.netlify.app/html-and-css/flexbox/index.html) y diga en clases que conclusiones puede tener del artículo.

- El modo de diseño “Flexible Box” o “Flexbox” ofrece una alternativa a los flotantes para definir la apariencia general de una página web.nos brinda control total sobre la alineación, dirección, orden y tamaño de nuestras cajas.

- CONTENEDOR FLEXIBLE: El primer paso para usar flexbox es convertir uno de nuestros elementos HTML en un contenedor flexible. Hacemos esto con la display, Al darle un valor de flex, le estamos diciendo al navegador que todo lo que hay en el cuadro debe representarse con flexbox en lugar del modelo de cuadro predeterminado.

- ALINEAR UN ELEMENTO FLEXIBLE:   justify-content: center;  

Otros valores para justify-contentse muestran a continuación:

center
flex-start
flex-end
space-around
space-between

- DISTRIBUCION DE VARIOS ARTICULOS FLEXIBLES: . La justify-contentpropiedad también le permite distribuir elementos equitativamente dentro de un contenedor. Pueden ser :

space-around  distribuye sus elementos en todo su ancho

El space-between valor es similar, pero solo agrega ese espacio extra entre elementos

- justify-content: alinea en la horizontal

- align-items: alinea en la vertical

Las opciones disponibles align-items son similares a justify-content:

center
flex-start   (arriba)
flex-end      (abajo)
stretch
baseline

- Para crear una cuadrícula, necesitamos la flex-wrap propiedadcon el valor wrap--> flex-wrap: wrap;

- flex-direction: column; o flex-direction: row;

RESUMEN RESUMEN RESUMEN 

Úselo display: flex;para crear un contenedor flexible.
Se utiliza justify-contentpara definir la alineación horizontal de los elementos.
Se utiliza align-itemspara definir la alineación vertical de los elementos.
Úselo flex-directionsi necesita columnas en lugar de filas.
Utilice los valores row-reverseo column-reversepara invertir el orden de los elementos.
Úselo orderpara personalizar el orden de los elementos individuales.
Úselo align-self para alinear verticalmente elementos individuales.
Úselo flex para crear cajas flexibles que se puedan estirar y encoger.

10. Lea el artículo [Scrim on Flexbox](https://scrimba.com/learn/flexbox/your-first-flexbox-layout-flexbox-tutorial-canLGCw) y diga en clases que conclusiones puede tener del artículo.

Como colocar el display flex y como se veia, paso de estar vertical a estar en toda una linea

11. Realiza todas las actividades y vea el contenido de todos los links de [Additional resources](https://www.theodinproject.com/lessons/foundations-introduction-to-flexbox#additional-resources) y diga en clases que conclusiones puede tener del artículo.

## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).
2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).
3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).
4. Termine los retos plasmados en los ejercicios del `1` al `63` de [Responsive Web Design](https://www.freecodecamp.org/learn/2022/responsive-web-design/), del apartado `Learn HTML Forms by Building a Registration Form` del portal [freeCodeCamp](https://www.freecodecamp.org/learn/).
5. Realizar los ejercicios del portal o aplicativo [Duolingo](https://www.duolingo.com/learn) de la `sección 10` del idioma `inglés`.