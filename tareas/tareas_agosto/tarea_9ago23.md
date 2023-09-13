# Tarea Martes HTML5 08 de agosto

## teórica

1. Lea el artículo [Git Basics](https://www.theodinproject.com/-lessons/foundations-git-basics) y diga en clases que conclusiones puede tener del artículo.

HABLA SOBRE LOS CONCEPTOS BASICOS DE GIT, Cómo crear un repositorio en GitHub.

Cómo obtener archivos hacia y desde GitHub.
Cómo tomar "instantáneas" de su código.

HABLA DE ALGUNOS COMANDO POR EJEMPLO: 
-git add .
-git clone git@github.com:USER-NAME/REPOSITORY-NAME.git
-git push git push origin main(Ambos logran el mismo objetivo en este contexto)
-git commit -m "A message describing what you have done to make this snapshot different"
-git status
-git log, para ver el historial de trabajo.
-

2. Lea el artículo [Renaming the default branch from master](https://github.com/github/renaming) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA: 
-Los nuevos repositorios se usan main como nombre de rama predeterminado en vez de master 

Cambiar el nombre de una rama hará lo siguiente:

-Vuelva a orientar cualquier solicitud de extracción abierta
-Actualizar cualquier borrador de lanzamiento basado en la rama
-Mueva cualquier regla de protección de rama que haga referencia explícita al nombre anterior
-Actualice la rama utilizada para crear páginas de GitHub, si corresponde
-Muestre un aviso a los colaboradores, mantenedores y administradores del repositorio en la página de inicio del repositorio con instrucciones para actualizar las copias locales del repositorio.
-Mostrar un aviso a los contribuyentes que git pusha la antigua rama
-Redirigir las solicitudes web para el nombre de la sucursal anterior al nuevo nombre de la sucursal
-Devuelva una respuesta "Movido permanentemente" en las solicitudes de API para el nombre de la sucursal anterior


3. Lea el artículo [Switching remote URLs from HTTPS to SSH](https://docs.github.com/en/get-started/getting-started-with-git/managing-remote-repositories#switching-remote-urls-from-https-to-ssh) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA DE COMO CAMBIAR DE UNA URL REMOTA DE HTTPS A SSH: 

-Abra la terminal
-Cambie el directorio al proyecto local
-Enumere sus controles remotos existentes para obtener el nombre del control remoto que desea cambiar.

$ git remote -v
> origin  https://github.com/OWNER/REPOSITORY.git (fetch)
> origin  https://github.com/OWNER/REPOSITORY.git (push)

-Cambie la URL de su control remoto de HTTPS a SSH con el git remote set-urlcomando.

git remote set-url origin git@github.com:OWNER/REPOSITORY.git

-Verifique que la URL remota haya cambiado.

$ git remote -v
# Verify new remote URL
> origin  git@github.com:OWNER/REPOSITORY.git (fetch)
> origin  git@github.com:OWNER/REPOSITORY.git (push)

Ademas habla de como renombrar un repositorio con: git remote rename, seguido del anterior nombre junto al nombre nuevo

-Git remote rm comando para eliminar una URL remota de su repositorio.

4. Lea el artículo [Vim (text editor)](https://en.wikipedia.org/wiki/Vim_(text_editor)) y diga en clases que conclusiones puede tener del artículo.

EL ARCHIVO HABLA DE EL EDITOR DE TEXTO VIM : Es un programa editor de texto gratuito y de código abierto basado en pantalla .Vim está diseñado para usarse desde una interfaz de línea de comandos y como una aplicación independiente en un entorno gráfico . interfaz de usuario

Vim utiliza un paradigma multi-modal, es decir, soporta diferentes modos: inserción de texto, normal (para revisar texto y aplicar comandos), modos visuales para seleccionar más fácilmente trozos de texto y otros. Además cada operación en Vim tiene su correspondiente atajo o combinación de teclas, evitando el uso del ratón por su lentitud. La mayoría de editores, en cambio, sólo disponen de un modo de inserción donde se supone que el usuario sólo introduce texto.


5. Realice las actividades de [Assignment](https://www.theodinproject.com/lessons/foundations-git-basics#assignment) y diga en clases que conclusiones puede tener del artículo.

YA TODO LO VIMOS EN CLASES

6. Lea el artículo [Note/Warning](https://www.theodinproject.com/lessons/foundations-git-basics#notewarning) y diga en clases que conclusiones puede tener del artículo.

ESTA PARTE DEL ARTICULO HABLA SOBRE UNA NOTA, que si quieres cambiar el contenido de un directorio o un archivo, es mejor hacerlo en tu editor local, luego darle git add. git commit y git push, en vez de corregirlo directamente en github

7. Lea el artículo [Cheatsheet](https://www.theodinproject.com/lessons/foundations-git-basics#cheatsheet) y diga en clases que conclusiones puede tener del artículo.

-Comandos relacionados con un repositorio remoto:

git clone git@github.com:USER-NAME/REPOSITORY-NAME.git
git pusho git push origin main(Ambos logran el mismo objetivo en este contexto)

-Comandos relacionados con el flujo de trabajo:

git add .
git commit -m "A message describing what you have done to make this snapshot different"

-Comandos relacionados con la verificación del estado o el 
historial de registro
git status
git log 

8. Lea el artículo [Git best practices](https://www.theodinproject.com/lessons/foundations-git-basics#git-best-practices) y diga en clases que conclusiones puede tener del artículo.


9. Lea el artículo [Changing the Git commit message editor](https://www.theodinproject.com/lessons/foundations-git-basics#changing-the-git-commit-message-editor) y diga en clases que conclusiones puede tener del artículo.

Dos mejores prácticas útiles a considerar son las confirmaciones atómicas y aprovechar esas confirmaciones atómicas para hacer que sus mensajes de confirmación sean más útiles para futuros colaboradores.

Hay dos razones principales para hacer esto: primero, si algo que cambia causa algunos problemas, es fácil revertir el cambio específico sin perder otros cambios; y segundo, le permite escribir mejores mensajes de compromiso. 


10. Lea el artículo [Conclusion](https://www.theodinproject.com/lessons/foundations-git-basics#conclusion) y diga en clases que conclusiones puede tener del artículo.

EN CONCLUSION  lo mas importante del articulo es el flujo de trabajo basico, los comandos basicos aprendidos, que son los que se usaran con mayor frecuencia y que no importa si se te complica es normal.

11. Responda las preguntas de [Knowledge check](https://www.theodinproject.com/lessons/foundations-git-basics#knowledge-check) y diga en clases que conclusiones puede tener del artículo.

-¿Cómo se crea un nuevo repositorio en GitHub? entrar en github, darle click al boton crear un nuevo repositorio, asignarle un nombre, agregar un readme, y darle click a crear repositorio.

-¿Cómo copia un repositorio en su máquina local desde GitHub? con git clone, se abre el terminal se coloca git clone seguido de la url o de la clave ssh y por ultimo enter

-¿Cuál es el nombre predeterminado de su conexión remota?  la palabra origen al comienzo de la git remote -v salida, que es el nombre de su conexión remota.

-Explique lo que originhay en git push origin main.
El nombre "origen" es tanto el predeterminado como la convención para el repositorio remoto.

-Explique lo que mainhay en git push origin main.
 Es una palabra que esta preestablecia o predeterminada. 

-Explicar el sistema de dos etapas que utiliza Git para guardar archivos.

Existen dos etapas que utiliza git para guardar archivos,  el area de ensayo y la preparacion, git add y git status. 

-¿Cómo compruebas el estado de tu repositorio actual? con git status

-¿Cómo se agregan archivos al área de preparación en git? 
se utiliza el comando git add

-¿Cómo compromete los archivos en el área de preparación y agrega un mensaje descriptivo?

Para realizar commit, debes escribir el comando git commit -m "el mensaje que quieras agregar"

-¿Cómo envía sus cambios a su repositorio en GitHub?
 Se utiliza el comando git push o git push origin main

-¿Cómo ves el historial de tus commits anteriores?

escribes el comando git log para ver el historial de tus commits y algunos detalles sobre el autor


12. Vea el video [Complete Git and GitHub Tutorial](https://www.youtube.com/watch?v=apGV9Kg7ics&ab_channel=KunalKushwaha) y diga en clases que conclusiones puede tener del video.


el video habla de que es git y github y explica comandos de consola muy básicos como: ls -a, touch, cd, rm etc sobre git dice lo siguiente: 

Git init: para crear un repositorio vacío en una carpeta

/Git status: para ver qué cosa se cambió (si se añadió algo, se quitó algo etc) 

Git add . (Este nos lo enseñó el profe, es para que los cambios hechos en el archivo se suban a github)

Git commit -m "blabla" (para comentario) 

Git log (para ver el historial de cambios de un archivo)

Un poco de contexto:

Cuando usas git log y ves las diferentes versiones del archivo , arriva aparece un commit seguido de un código 

Git reset "código"( es para regresar a esa versión del archivo) 

Git stash (es para guardar una copia exclusivamente tuya del archivo en tu máquina, no se sube al repositorio de Github y los cambios no se registran en el git log) 

Git stash pop (hace públicos tus cambios, si aparecen en el git log) 

Git stash clear (resetea los cambios que tú hicistes) 

Git remote add origin "link"(el link es del repositorio que creas en Github, básicamente es para trabajar en un repositorio desde tu máquina) 

Git remote -v (es para ver cuántos repositorios están "anclados" a una carpeta)

 Contexto:

Cuando nosotros hacemos cambios en el repositorio y los subimos, git crea unas ramas (branch) las cuales son de los diferentes cambios que se han hecho, ahora bien, hay una forma de que solo puedas acceder a determinada rama de cambios y es con el comando "git branch (nombre)", que posiciona el head al último commit. 

Vamos a suponer que estamos trabajando los 3 en un proyecto, y cada quien trabaja desde su propio repositorio, si queremos mandar los cambios/archivos de nuestros repositorios al repositorio principal (que se llama Master siempre) vamos a usar el comando "git push origin master"

Luego de todo eso habla sobre que son las bifurcaciones (forked repo), esencialmente es un mini repositorio dónde se recopilan cambios para luego mandar pocos cambios a un mega repositorio eso es lo básico, pero se tira 40 minutos a hablar de eso y explica también como hacer cambios en un repositorio ajeno (entiendase el forked) desde el terminal de Linux (para una manera más fácil simplemente te metes en github, entras en tu repositorio, y en la parte de arriba debe decir en alguna parte "fork", haces lo que te diga y listo) 

Por último

Git rebase -i "código de log commit"[permite abrir un menú con todos los commit que se han hecho, y  códigos de cada versión, para que todos los commit se conviertan en uno solo (osea que con el git log en vez de ver mil commit solo vas a ver uno) al lado del código (arriva) cambias el pick por una s]

Habla por último de los merge conflict (o conflictos de fusión) que viene a ser cuando dos personas hacen cambios en la misma línea de código y suben los dos cambios a github, básicamente lo arreglas en el mis.o github (tu eliges que versión quieres o si quieres fusionar ambas versiones, es decir que el código de uno le sigue al otro) 


13. Lea el artículo [Git - Reference](https://git-scm.com/docs) y diga en clases que conclusiones puede tener del artículo.

  EL ARTICULO ES COMO UNA GUIA DE GIT, donde encuentras acerca de instalacion, configuracion, instalaciones basicas, ramificaciones y funciones, depuracciones, comandos basicos, proyectos y guias de estudio.


14. Lea el artículo [Adding locally hosted code to GitHub](https://docs.github.com/en/migrations/importing-source-code/using-the-command-line-to-import-source-code/adding-locally-hosted-code-to-github) y diga en clases que conclusiones puede tener del artículo.

EL ARTICULO HABLA SOBRE COMO AGREGAR CODIGO ALOJADO LOCALMENTE A GIT HUB, para eso:

-Se abre la terminal
-Cambie su directorio a la raiz de su proyecto 
-Inicialice el directorio local como un repositorio de Git. Por defecto, la rama inicial se llama main. con: git init -b main
-Realice git add . para agregar los archivos en su nuevo repositorio local.
-Escrivba git commit -m "el mensaje que desee colocar"
-Finalmente haga git push 

## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).
2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).
3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).
4. Termine los retos plasmados en los ejercicios del `1` al `63` de [Responsive Web Design](https://www.freecodecamp.org/learn/2022/responsive-web-design/), del apartado `Learn HTML Forms by Building a Registration Form` del portal [freeCodeCamp](https://www.freecodecamp.org/learn/).
5. Realizar los ejercicios del portal o aplicativo [Duolingo](https://www.duolingo.com/learn) de la `sección 10` del idioma `inglés`.