# Tarea Jueves HTML5 03 de julio

## teórica

1. Lea el artículo [Navigating Files and Directories](https://swcarpentry.github.io/shell-novice/02-filedir.html) y diga en clases que conclusiones puede tener del artículo.

El articulo habla sobre la Navegación por archivos y directorios: 

-$pwd te dice donde te encuentras, output /Users/nelle
-/ este signo indica que el users/ esta dentro del directorio raiz
-Podemos ver en lo que hay en nuestro Sistema de archivo propio ehecutando el comando: $ ls
-Para encontrar el nombre de un file escribimos: $ ls -F
-Para obtener ayuda escribe $ls --help o $ man ls Este comando convertirá tu terminal en una página con una descripción del comando y sus opciones.ls
-Para explorar otros directorios $ ls -F Desktop
-para entrar dentro de una carpeta o directorio $ ls -F Desktop/shell-lesson-data (shell lesson data es un subdirectorio dentro del directorio del usuario)
-Tambien se puede hacer de la siguiente manera: 
$ cd Desktop
$ cd shell-lesson-data
$ cd exercise-data
-Para cambiar de directorio escriba cd /user/deskto por ejemplo
-Para subir un nivel de directorio escribimos cd ..
-El directorio especial no suele aparecer cuando correr. a significa que muestra los archivos ocultos. Si queremos mostrarlo: $ ls -F -a

2. Lea el artículo [Working With Files and Directories](https://swcarpentry.github.io/shell-novice/03-create.html) y diga en clases que conclusiones puede tener del artículo.

-Para CREAR DIRECTORIOS :
1 Paso uno: ver dónde estamos y lo que ya tenemos, para eso escribimos $pwd > $ ls -F
2 Crear un directorio: $ mkdir thesis (donde thesis es el nombre del nuevo directorio)
3 comprobamos escribiendo $ ls -F
-Para crear un subdirectorio anidado dentro de un directoio escribimos lo anterior + -p: $ mkdir -p../project/data ../project/results
-Para mostrar los subdirectorios anidados escribimos $ ls -FR ../project

-CREAR ARCHIVOS DE TEXTO
1 paso uno cambiamos nuestro directorio con
$ cd thesis y y creamos una carpeta con la palabra $nano : $ nano draft.txt

-PARA CAMBIAR NOMBRE DEL ARCHIVO usamos $mv:
$ mv thesis/draft.txt thesis/quotes.txt

-PARA COPIAR ARCHIVOS Y DIRECTORIOS
1 en el primer paso podemos usar dos caminos:
$ cp quotes.txt thesis/quotations.txt
$ ls quotes.txt thesis/quotations.txt

También podemos copiar un directorio y todo su contenido utilizando la opción recursiva -r: ejemplo $ cp -r thesis thesis_backup

-ELIMINAR ARCHIVO Y DIRECTORIOS: 
*para eliminar usamos el comando rm ejemplo: $ rm quotes.txt (quotes.txt es el archivo/ file eliminado), para ver si fue efectivo escribimos $ ls y luego debe salir que no se encontro carpeta
*Si eliminamos un directorio con rm nos dara un mensaje de error, tenemos que ageregar -r ejemplo: $ rm -r thesis


3. Lea el artículo [Pipes and Filters](https://swcarpentry.github.io/shell-novice/04-pipefilter.html) y diga en clases que conclusiones puede tener del artículo.

-CONTAR LINEAS, PALABRAS Y CARACTERES
-wc cuenta líneas, palabras y caracteres en su Entradas. Ejemplo: $ wc cubane.pdb
* $ wc *.pdb mmuestra lineas, palabras y caracteres de todos los archivos
*$ wc -l *.pdb: para contar lineas de un archivo.
* con -m para contar caracteres
- con -w cuenta numeros.


-cat Muestra el contenido de sus entradas.

-sort ordena sus entradas: $ cat lengths.txt

-head Muestra las primeras 10 líneas de su entrada.: $ head -n 1 sorted-lengths.txt


-tail Muestra las últimas 10 líneas de su entrada: $ tail -n 2 animals.csv >> animals-subset.csv

-command > [file] Redirige la salida de un comando a un archivo (sobrescribiendo cualquier contenido existente).

-command >> [file] anexa el resultado de un comando a un archivo.

-[first] | [second] es una tubería: la salida de la El primer comando se utiliza como entrada para el segundo.

-La mejor manera de usar la cáscara es usar tuberías para combinar Programas de propósito único (filtros).


4. Lea el artículo [Loops](https://swcarpentry.github.io/shell-novice/05-loop.html) y diga en clases que conclusiones puede tener del artículo.

El articulo habla sobre los bucles o los loops, que son ciclos repetitivos, donde se repite ciertas veces una cantidad de comandos, 

$ for filename in basilisk.dat minotaur.dat unicorn.dat
> do
>     echo $filename
>     head -n 2 $filename | tail -n 1
> done

NORMAS
-Las variables comienzan con un signo de $
-echo para print 
-los filenames terminan con .dat
-$filename es lo mismo ${filename},  pero es diferente cuando usas ${file}name
-Cada bucle for necesita una variable para referirse a la cosa Actualmente está funcionando
-Use la tecla de flecha arriba para desplazarse hacia arriba por los comandos anteriores para editar y repetirlos.


5. Lea el artículo [Shell Scripts](https://swcarpentry.github.io/shell-novice/06-script.html) y diga en clases que conclusiones puede tener del artículo.

-Guarde comandos en archivos (normalmente denominados scripts de shell) para reutilización.
-bash [filename] Ejecuta los comandos guardados en un archivo, ejemplo: $ bash middle.sh
-$@ hace referencia a toda la línea de comandos de un script de shell Argumentos. También debemos poner $@ dentro de comillas dobles para manejar el caso de argumentos que contienen espacios 
-$1, , etc., se refieren a la primera argumento de línea de comandos, el segundo argumento de línea de comandos, etc.$2
-Coloque las variables entre comillas si los valores pueden tener espacios en ellos.
-Permitir que los usuarios decidan qué archivos procesar es más flexible y más consistente con los comandos Unix incorporados.

6. Realice los ejercicios del apartado [Assignment](https://www.theodinproject.com/lessons/foundations-command-line-basics#assignment) y diga en clases que conclusiones puede tener del artículo.


7. Lea el artículo [tab completion](https://en.wikipedia.org/wiki/Command-line_completion) y diga en clases que conclusiones puede tener del artículo.


8. Lea el artículo [Chapter 1 Basics and Navigation](https://www.softcover.io/read/fc6c09de/unix_commands/basics#sec-basics-cd) y diga en clases que conclusiones puede tener del artículo.


9. De respuesta a las pregustas del apartado [Knowledge check](https://www.theodinproject.com/lessons/foundations-command-line-basics#knowledge-check), y diga en clases sus respuestas sin leer el material de apoyo.

## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).

2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).

3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).

4. Termine los retos plasmados en los ejercicios del `1` al `94` de `Responsive Web Design`, del apartado `Learn CSS Colors by Building a Set of Colored Markers` del portal `freeCodeCamp`.

5. Realizar los ejercicios del portal o aplicativo `Duolingo` de la `sección 10` del idioma `inglés`.

6. instale `VSCode` en el sistema operativo `Xubuntu`.