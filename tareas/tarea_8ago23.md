# Tarea Martes HTML5 08 de agosto

## teórica

1. Lea el artículo [Introduction to Git](https://www.theodinproject.com/lessons/foundations-introduction-to-git) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de el git, que es un sistema de control de versiones, que permite que los archivos se suban a la nube, por ejemplo a github, es una herramnienta basica que necesita un programador 

Explique qué son Git y GitHub y las diferencias entre los dos.
Describa las diferencias entre Git y un editor de texto en términos de lo que guardan y su mantenimiento de registros.
Describa por qué Git es útil para un desarrollador individual y un equipo de desarrolladores.



2. Lea el artículo [1.1 Getting Started - About Version Control](https://git-scm.com/book/en/v2/Getting-Started-About-Version-Control) y diga en clases que conclusiones puede tener del artículo.


HABLA de 

-Sistemas de control de versiones locales: Una de las herramientas VCS más populares fue un sistema llamado RCS, que todavía se distribuye con muchas computadoras en la actualidad. RCS funciona manteniendo conjuntos de parches (es decir, las diferencias entre archivos) en un formato especial en el disco; luego puede volver a crear el aspecto de cualquier archivo en cualquier momento agregando todos los parches.

-Sistemas de control de versiones centralizado: El siguiente gran problema que encuentran las personas es que necesitan colaborar con desarrolladores en otros sistemas. Para hacer frente a este problema, se desarrollaron los Sistemas de Control de Versiones Centralizados (CVCS). Estos sistemas (como CVS, Subversion y Perforce) tienen un solo servidor que contiene todos los archivos versionados y varios clientes que extraen archivos de ese lugar central. 

Sin embargo, esta configuración también tiene algunas desventajas serias. El más obvio es el único punto de falla que representa el servidor centralizado. Si ese servidor se cae durante una hora, entonces durante esa hora nadie puede colaborar en absoluto o guardar cambios versionados en cualquier cosa en la que estén trabajando.

-Sistemas de control de versiones distribuidos: Aquí es donde intervienen los sistemas de control de versiones distribuidos (DVCS). En un DVCS (como Git, Mercurial, Bazaar o Darcs), los clientes no solo revisan la última instantánea de los archivos; más bien, reflejan completamente el repositorio, incluido su historial completo.


3. Lea el artículo [1.2 Getting Started - A Short History of Git](https://git-scm.com/book/en/v2/Getting-Started-A-Short-History-of-Git) y diga en clases que conclusiones puede tener del artículo.

HABLA SOBRE LA HISTORIA DE GIT: 

-INICIOS del kernel de Linux (1991–2002),
-En 2005, la relación entre la comunidad que desarrolló el kernel de Linux y la empresa comercial que desarrolló BitKeeper se rompió y se revocó el estado gratuito de la herramienta.
-Desde su nacimiento en 2005, Git ha evolucionado y madurado para ser fácil de usar y, sin embargo, conservar estas cualidades iniciales. Es increíblemente rápido, es muy eficiente con proyectos grandes y tiene un increíble sistema de bifurcación para el desarrollo no lineal (ver Git Branching ).


4. Lea el artículo [1.3 Getting Started - What is Git?](https://git-scm.com/book/en/v2/Getting-Started-What-is-Git%3F) y diga en clases que conclusiones puede tener del artículo.

HABLA DE LAC CARACTERISTICAS DE GIT QUE SON: 

-Instantáneas, se guardan las versiones de forma instantanea
-Casi todas las operaciones son locales, La mayoría de las operaciones en Git solo necesitan archivos y recursos locales para funcionar; por lo general, no se necesita información de otra computadora en su red.

-Git tiene integridad: Todo en Git se suma antes de que se almacene y luego se hace referencia a esa suma de verificación. Esto significa que es imposible cambiar el contenido de cualquier archivo o directorio sin que Git lo sepa. Esta funcionalidad está integrada en Git en los niveles más bajos y es parte integral de su filosofía.

-Git generalmente solo agrega datos, es decir, Cuando realiza acciones en Git, casi todas solo agregan datos a la base de datos de Git. Es difícil hacer que el sistema haga algo que no se pueda deshacer o que borre datos de alguna manera.
Git tiene tres estados principales en los que pueden residir sus archivos: modificado , preparado y confirmado :


5. Lea el artículo [1.4 Getting Started - The Command Line](https://git-scm.com/book/en/v2/Getting-Started-The-Command-Line) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA DE LA LINEA DE COMANDO: 

Existen las herramientas de línea de comandos originales y hay muchas interfaces gráficas de usuario de diferentes capacidades. Para este libro, usaremos Git en la línea de comando. Por un lado, la línea de comandos es el único lugar donde puede ejecutar todos los comandos de Git: la mayoría de las GUI implementan solo un subconjunto parcial de la funcionalidad de Git para simplificar



6. Vea el video [What is Git? Explained in 2 Minutes!](https://youtu.be/2ReR1YJrNOM) y diga en clases que conclusiones puede tener del video.

El video habla sobre git el sistema de control de versiones, habla, donde puedes rastrear el historial del proyecto y trabajar en equipo, ademas, es gratis, de codigo abierto, rapido y escalable


7. Vea el video [GitHub for Noobs (1/4) – A Short History](https://www.youtube.com/watch?v=1h9_cB9mPT8&t=13s&ab_channel=DevTips) y diga en clases que conclusiones puede tener del video.

El video habla sobre git hub y git, la diferencua entre ambas

8. Realiza las actividades de [Assignment](https://www.theodinproject.com/lessons/foundations-introduction-to-git#assignment) y diga en clases que conclusiones puede tener del artículo.

1-Lea los Capítulos 1.1 a 1.4 de este libro sobre el control de versiones para conocer las diferencias entre los sistemas de control de versiones locales, centralizados y distribuidos.

-Sistemas de control de versiones locales:  todos los datos del proyecto se almacenan en una sola computadora y los cambios realizados en los archivos del proyecto se almacenan como revisiones

-Sistemas de control de versiones centralizado: ocurre cuando un conjunto de programadores trabajan en quipo, tienen un solo servidor que contiene todos los archivos versionados y varios clientes que extraen archivos de ese lugar central. 

-Sistemas de control de versiones distribuidos: Aquí es donde intervienen los sistemas de control de versiones distribuidos (DVCS) los clientes no solo revisan la última instantánea de los archivos; más bien, reflejan completamente el repositorio, incluido su historial completo.

2-Mire este video sobre qué es Git y cómo puede mejorar el flujo de trabajo tanto de un individuo como de un equipo de desarrolladores.

El video habla de como mejorar el flujo de trabajo tanto de un individuo o un equipo de trabajo, mediante git, que es un sistema de control de versiones, donde puedes ver el progreso de tu trabajo, si es en equipo esto permite que sea mas productivo el trabajo ya que las versiones estan actualizadas y de facil accceso para trabajar en grupo

3-Mire este video para conocer la historia de Git y GitHub, y asegúrese de conocer la diferencia entre los dos. Git es una tecnología utilizada en la línea de comandos, mientras que GitHub es un sitio web que puede visitar.

Exactamente como dice el enunciado git es un sistema de control de versiones, lo que significa que un clon local del proyecto es un repositorio de control de versiones completo. mientras que github, es un sitio web donde almacenas tus trabajos/portafolios en la nube, sin preocupaciones de que las pierdas. 

4-Si aún no ha instalado Git, visite la lección Configuración de Git . YA INSTALE GIT 

5-Eche un vistazo al propio repositorio de GitHub de The Odin Project . ¡Aquí es donde se almacenan todas las lecciones! Mientras esté allí, mire a todos nuestros colaboradores para apreciar cómo Git registra todos los esfuerzos de colaboración y cómo GitHub los representa visualmente.


9. Responda las preguntas realizadas en el apartado [Knowledge check](https://www.theodinproject.com/lessons/foundations-introduction-to-git#knowledge-check) y diga en clases que conclusiones puede tener del artículo.

-¿Qué tipo de programa es Git? git es un sistema de control de versiones

-¿Cuáles son las diferencias entre Git y un editor de texto en términos de lo que guardan y su mantenimiento de registros?

Un guardado en un editor de texto registra todas las palabras en un documento como un solo archivo, mientras que git cumple con la funcion de boton de guardado.

-¿Git funciona a nivel local o remoto? git funciona a nivel local, ya que esta en el local no necesitas coneccion de red para usarla

-¿GitHub funciona a nivel local o remoto? git hub funciona a nivel remoto, ya que es un servidor web 

-¿Por qué Git es útil para los desarrolladores? es util para los desarrolladores para ver las versiones del trbajo realizado por el programador y tener mas orden, para realizar el programa

-¿Por qué Git y GitHub son útiles para un equipo de desarrolladores?  Es muy util ya que puedes tener un control de versiones del trabajo o programa que se realizar y guardarlo en un sitio en la nube, donde puedes mantener tu trabajo actualizado, ordenado y que genera un ambiente de equipo muy comodo.


10. Lea el artículo [What is Git and Github?](https://content.red-badger.com/resources/what-is-git-and-github) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA SOBRE GIT Y GITHUB

git: es un sistema de control de versiones diseñado específicamente para funcionar bien con archivos de texto, Resumen.  Git es un programa que le permite anotar el historial de un sistema (o grupo) de archivos a través de confirmaciones, que son "instantáneas" de las diferencias realizadas en el sistema en un momento determinado.

Github: toma ese encantador historial de confirmaciones y lo aloja en línea para que pueda acceder a él desde cualquier computadora. Para hacer esto, envíe confirmaciones desde su máquina local (es decir, la computadora que está usando actualmente) hasta Github, y luego, desde la computadora nueva/diferente, extraiga esas confirmaciones.


11. Lea el artículo [What is version control?](https://www.atlassian.com/git/tutorials/what-is-version-control) y diga en clases que conclusiones puede tener del artículo.

BENEFICIOS DEL CONTROL DDE VERSIONES : 
1 Un historial completo de cambios a largo plazo de cada archivo. Tener el historial completo permite volver a las versiones anteriores para ayudar en el análisis de la causa raíz de los errores y es crucial cuando se necesita solucionar problemas en versiones anteriores del software

2 Ramificación y fusión. Hacer que los miembros del equipo trabajen simultáneamente, as personas que trabajan por su cuenta pueden beneficiarse de la capacidad de trabajar en flujos de cambios independientes.

3 Trazabilidad. Ser capaz de rastrear cada cambio realizado en el software y conectarlo a un software de gestión de proyectos y seguimiento de errores,  y poder anotar cada cambio con un mensaje que describa el propósito y la intención del cambio puede ayudar no solo con el análisis de la causa raíz. y otros forenses.



12. Vea el video [What is Version Control? - Git Guides (2020)](https://www.youtube.com/watch?v=xQujH0ElTUg&ab_channel=Atlassian) y diga en clases que conclusiones puede tener del video.

Es una guia de git 


13. Lea el artículo [What is Git](https://www.atlassian.com/git/tutorials/what-is-git) y diga en clases que conclusiones puede tener del artículo.


Git es un proyecto de código abierto maduro y mantenido activamente desarrollado originalmente en 2005 por Linus Torvalds, el famoso creador del kernel del sistema operativo Linux.

Seguridad:
Git ha sido diseñado con la integridad del código fuente administrado como máxima prioridad. El contenido de los archivos, así como las verdaderas relaciones entre archivos y directorios, versiones, etiquetas y confirmaciones, todos estos objetos en el repositorio de Git están protegidos con un algoritmo hash criptográficamente seguro llamado SHA1.

Flexibilidad: Git es flexible en varios aspectos: admite varios tipos de flujos de trabajo de desarrollo no lineal, en su eficiencia tanto en proyectos pequeños como grandes y en su compatibilidad con muchos sistemas y protocolos existentes.

-De alta calidad, usado alrededor de todo el mundo, gratuito, confiable, practico

## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).
2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).
3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).
4. Termine los retos plasmados en los ejercicios del `1` al `63` de [Responsive Web Design](https://www.freecodecamp.org/learn/2022/responsive-web-design/), del apartado `Learn HTML Forms by Building a Registration Form` del portal [freeCodeCamp](https://www.freecodecamp.org/learn/).
5. Realizar los ejercicios del portal o aplicativo [Duolingo](https://www.duolingo.com/learn) de la `sección 10` del idioma `inglés`.