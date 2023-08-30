# Tarea Viernes HTML5 25 de agosto

## teórica

1. Lea el artículo [Growing and Shrinking](https://www.theodinproject.com/lessons/foundations-growing-and-shrinking) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de flex-grow, flex-shrink y flex-basis, 
2. Lea el artículo [Introduction](https://www.theodinproject.com/lessons/foundations-growing-and-shrinking#introduction) y diga en clases que conclusiones puede tener del artículo.

Nos dice acerca de la propiedad flex: 1 

3. Lea el artículo [Lesson overview](https://www.theodinproject.com/lessons/foundations-growing-and-shrinking#lesson-overview) y diga en clases que conclusiones puede tener del artículo.

Lesson overview habla de lo que veremos en el articulo que son las tres propiedades flex


4. Lea el artículo [Shorthand properties](https://developer.mozilla.org/en-US/docs/Web/CSS/Shorthand_properties) y diga en clases que conclusiones puede tener del artículo.

habla de Propiedades taquigráficas:
- casos extremos complicados
- propiedades de fondo 
- propiedades de borde
- propiedades de fuente
- Propiedades de margen y relleno
- Propiedades de posición

5. Lea el artículo [The flex shorthand](https://www.theodinproject.com/lessons/foundations-growing-and-shrinking#the-flex-shorthand) y diga en clases que conclusiones puede tener del artículo.

TAQUIGRAFIA FLEXIBLE
habla de la propiedad flex, es una abreviatura de 3 propiedades, flexes en realidad una abreviatura flex-growde flex-shrinky flex-basis.

Muy a menudo verás la taquigrafía flexible definida con un solo valor. En ese caso, ese valor se aplica a flex-grow. Entonces, cuando pusimos flex: 1nuestros divs, en realidad estábamos especificando una abreviatura de flex: 1 1 0.

6. Lea el artículo [W3C’s flex section](https://www.w3.org/TR/css-flexbox-1/#flex-common) y diga en clases que conclusiones puede tener del artículo.

LA PROPIEDAD FLEX PUEDE TENER 4 PROPIEDADES

- flex: initial  : Equivalente a flex: 0 1 auto . (Este es el valor inicial). Ajusta el tamaño del elemento según las propiedades de ancho / alto. (Si la propiedad de tamaño principal del elemento se calcula en auto , esto ajustará el tamaño del elemento flexible según su contenido). Hace que el elemento flexible sea inflexible cuando hay espacio libre positivo

- flex: auto
 Equivalente a flex: 1 1 auto . Dimensiona el elemento según las propiedades de ancho / alto , pero los hace completamente flexibles, de modo que absorban cualquier espacio libre a lo largo del eje principal

- flex: none
Equivalente a flex: 0 0 auto . Este valor dimensiona el elemento según las propiedades de ancho / alto , pero hace que el elemento flexible sea completamente inflexible 

- flex: <positive-number>
Equivalente a flexionar: <número-positivo> 1 0 . Hace que el elemento flexible sea flexible y establece la base flexible en cero, lo que da como resultado un elemento que recibe la proporción especificada del espacio libre en el contenedor flexible.
------------------------------------

Fijando flex: initial el ítem se restablece con los valores iniciales de Flexbox. Es lo mismo que flex: 0 1 auto.

Usar flex: auto es lo mismo que usar flex: 1 1 auto , es como con flex:initial pero en este caso los ítems pueden crecer y llenar el contendor así como encoger si se requiere.

Al usar flex: none se crearán ítems flex totalmente inflexibles. Es como escribir flex: 0 0 auto. Los ítems no pueden ni crecer ni encoger pero serán colocados usando flexbox con flex-basis en auto.

flex: <número-positivo>
Hace que el elemento flexible sea flexible y establece la base flexible en cero, lo que da como resultado un elemento que recibe la proporción especificada del espacio restante .


7. Lea el artículo [flex](https://developer.mozilla.org/en-US/docs/Web/CSS/flex) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de 
1. Las propiedades de flex :

- flex-grow
- flex-shrink
- flex-basis

2. SINTAXIS 

- de un valor ejemplo: 

  * para <flex-grow> la abreviatura se expande a flex: <flex-grow> 1 0.

  * para <flex-basis>la abreviatura se expande a flex: 1 1 <flex-basis>.

- de dos valores ejemplo:

  * El primer valor debe ser un valor válido para flex-grow

  * El segundo valor debe ser uno de:
    + para flex-shrink: la abreviatura se expande a flex: <flex-grow> <flex-shrink> 0.

    + para flex-basis: la abreviatura se expande a flex: <flex-grow> 1 <flex-basis>.

- de tres valores deben estar en el siguiente orden:

  * flex-grow.
  * flex-shrink.
  * flex-basis.

3. LOS VALORES QUE PUEDE TENER initial, auto, none, <'flex-grow'>, <'flex-shrink'>, <'flex-basis'>

8. Realiza todas las actividades de [Assignment](https://www.theodinproject.com/lessons/foundations-growing-and-shrinking#assignment) y diga en clases que conclusiones puede tener del artículo.

- Lea la sección flexible del W3C para comprender los valores básicos de los valores abreviados flexibles comunes.

  Fijando flex: initial el ítem se restablece con los valores iniciales de Flexbox. Es lo mismo que flex: 0 1 auto.

  Usar flex: auto es lo mismo que usar flex: 1 1 auto , es como con flex:initial pero en este caso los ítems pueden crecer y llenar el contendor así como encoger si se requiere.

  Al usar flex: none se crearán ítems flex totalmente inflexibles. Es como escribir flex: 0 0 auto. Los ítems no pueden ni crecer ni encoger pero serán colocados usando flexbox con flex-basis en auto.

  flex: <número-positivo>
  Hace que el elemento flexible sea flexible y establece la base flexible en cero, lo que da como resultado un elemento que recibe la proporción especificada del espacio restante .

- Este documento de MDN resume todos los valores de taquigrafía flexible y presenta alguna sintaxis nueva que no se cubrió en el artículo anterior.

LO MISMO QUE DICE EN LA PREGUNTA 7. 

9. Responda las preguntas de [Knowledge check](https://www.theodinproject.com/lessons/foundations-growing-and-shrinking#knowledge-check) y diga en clases que conclusiones puede tener del artículo.

- ¿Cuáles son los 3 valores definidos en la flex propiedad abreviada (por ejemplo flex: 1 1 auto)?

flex: 1 1 0 equivale  a flex-grow: 1, flex-shrink: 1, flex-basis: 0
 
- ¿Cuáles son los 3 valores definidos para la taquigrafía flexible flex:auto? 

flex: 1 1 auto

10. Vea el video [Learn flexbox the easy way](https://www.youtube.com/watch?v=u044iM9xsWU&t=1s&ab_channel=KevinPowell) y diga en clases que conclusiones puede tener del video.

Qué sucede cuando declaramos display: flex
flex-grow
flex-direction
-justify-content
-align-items

11. Lea el artículo [The flex property - Flexbox tutorial](https://scrimba.com/learn/flexbox/the-flex-property-flexbox-tutorial-cGNKJTv) y diga en clases que conclusiones puede tener del artículo.

COmo colocar el display flex y como se veia, paso de estar vertical a estar en toda una lineaa

12. Lea el artículo [Flex grow, shrink, basis - Flexbox tutorial](https://scrimba.com/learn/flexbox/flex-grow-shrink-basis-flexbox-tutorial-ck6L7fv) y diga en clases que conclusiones puede tener del artículo.

.home {
  flex: 1 1 0;
  flex-grow: 1;
  flex-shrink: 1;
  flex-basis: 0;
}

13. Realiza todas las actividades y vea el contenido de todos los links de [Additional resources](https://www.theodinproject.com/lessons/foundations-growing-and-shrinking#additional-resources) y diga en clases que conclusiones puede tener del artículo.

## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).
2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).
3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).
4. Termine los retos plasmados en los ejercicios del `1` al `63` de [Responsive Web Design](https://www.freecodecamp.org/learn/2022/responsive-web-design/), del apartado `Learn HTML Forms by Building a Registration Form` del portal [freeCodeCamp](https://www.freecodecamp.org/learn/).
5. Realizar los ejercicios del portal o aplicativo [Duolingo](https://www.duolingo.com/learn) de la `sección 10` del idioma `inglés`.