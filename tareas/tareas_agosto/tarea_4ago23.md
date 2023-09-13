# Tarea Viernes HTML5 04 de agosto

## teórica

1. Lea el artículo [The Art of Command Line](https://github.com/jlevy/the-art-of-command-line#readme) y diga en clases que conclusiones puede tener del artículo.

ES UN MANUAL PARA LINEA DE COMANDOS: habla de Procesamiento de archivos y datos, Depuración del sistema, comandos basicos 

LO ESCENCIAL 
El articulo habla sobre la linea de comandos:
-man man enumera los numeros de seccion. 
-help y help -d, muestra los comandos ejecutables, y colocando type command para averiguar si un comando es ejecutable
-curl cheat.sh/commanddará una breve "hoja de trucos" con ejemplos comunes de cómo usar un comando de shell.


CONTROL 
-ctrl + r: para buscar en el historial de comandos
-ctrl+w para eliminar la ultima palbra
-ctrl+u para eliminar el contenido del cursor actual 
-ctrl+a para mover el cursor al principio de la linea
-ctrl+e para mover el cursor al final de la linea
-ctrl+k para matar al final de la línea,
-ctrl+l para borrar la pantalla


-alt +e, alt+f para moverse de palabra

PARA 
-detener in proceso kill -STOP [pid]

NOTAS: PUEDES CONFIGURAR ALIAS

OSCURO PERO UTIL 

expr: realizar operaciones aritméticas o booleanas o evaluar expresiones regulares

m4: procesador de macros simple

yes: imprime una cadena mucho

cal: buen calendario

env: ejecutar un comando (útil en scripts)

printenv: imprime variables de entorno (útil en depuración y scripts)

look: encuentra palabras en inglés (o líneas en un archivo) que comienzan con una cadena

cut, pastey join: manipulación de datos

fmt: formato de párrafos de texto

pr: formato de texto en páginas/columnas

fold: ajustar líneas de texto

column: formato de campos de texto en columnas o tablas alineadas de ancho fijo

expandy unexpand: convertir entre tabulaciones y espacios

nl: añadir números de línea

seq: imprimir números

bc: calculadora

factor: factorizar enteros

gpg: cifrar y firmar archivos

toe: tabla de entradas terminfo

nc: depuración de red y transferencia de datos

socat: socket relay y tcp port forwarder (similar a netcat)

slurm: visualización del tráfico de red

dd: mover datos entre archivos o dispositivos

file: identifica el tipo de un archivo

tree: mostrar directorios y subdirectorios como un árbol anidado; como lspero recursivo

stat: información del archivo

time: ejecutar y cronometrar un comando

timeout: ejecuta un comando durante una cantidad de tiempo especificada y detiene el proceso cuando se completa la cantidad de tiempo especificada.

lockfile: crea un archivo de semáforo que solo puede ser eliminado porrm -f

logrotate: rotar, comprimir y enviar registros por correo.

watch: ejecutar un comando repetidamente, mostrando resultados y/o resaltando cambios

when-changed: ejecuta cualquier comando que especifique cada vez que ve que el archivo ha cambiado. Ver inotifywaity entrtambién.

tac: imprimir archivos al revés

comm: comparar archivos ordenados línea por línea

strings: extraer texto de archivos binarios

tr: traducción o manipulación de personajes

iconvo uconv: conversión para codificaciones de texto

splity csplit: dividir archivos

sponge: lea toda la entrada antes de escribirla, útil para leer y luego escribir en el mismo archivo, por ejemplo,grep -v something some-file | sponge some-file

units: conversión de unidades y cálculos; convierte furlongs por quincena a twips por parpadeo (ver también /usr/share/units/definitions.units)

apg: genera contraseñas aleatorias

xz: compresión de archivos de alta relación

ldd: información de la biblioteca dinámica

nm: símbolos de archivos de objetos

abo wrk: servidores web de evaluación comparativa

strace: depuración de llamadas al sistema

mtr: mejor traceroute para la depuración de red

cssh: shell concurrente visual

rsync: sincronizar archivos y carpetas a través de SSH o en el sistema de archivos local

wiresharky tshark: captura de paquetes y depuración de red

ngrep: grep para la capa de red

hosty dig: búsquedas de DNS

lsof: descriptor de archivo de proceso e información de socket

dstat: estadísticas útiles del sistema

glances: visión general de varios subsistemas de alto nivel

iostat: Estadísticas de uso del disco

mpstat: estadísticas de uso de la CPU

vmstat: Estadísticas de uso de memoria

htop: versión mejorada de top

last: historial de inicio de sesión

w: quién está conectado

id: información de identidad de usuario/grupo

sar: estadísticas históricas del sistema

iftopo nethogs: utilización de la red por socket o proceso

ss: estadísticas de socket

dmesg: mensajes de error de arranque y del sistema

sysctl: ver y configurar los parámetros del kernel de Linux en tiempo de ejecución

hdparm: Manipulación/rendimiento de discos SATA/ATA

lsblk: lista de dispositivos de bloque: una vista de árbol de sus discos y particiones de disco

lshw, lscpu, lspci, lsusb, dmidecode: información de hardware, incluyendo CPU, BIOS, RAID, gráficos, dispositivos, etc.

lsmody modinfo: Lista y muestra detalles de los módulos del kernel.

fortune, ddate, y sl: um, bueno, depende de si consideras que las locomotoras de vapor y las citas de Zippy son "útiles"



2. Lea el artículo [Learn Enough Command Line to Be Dangerous](https://www.learnenough.com/command-line-tutorial) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de como ser peligroso usando la linea de comandos, habla de como abrir un terminal, luego habla de como esta compuesta una linea del terminal:

-Aviso o prompt, que es el indicador termina en $ o signo de %
-El comando es lo que indica la tarea que queremos realizar ejemplo rm 
-El argumento que es el nombre de archivo, directorio

COMANDOS:
- echo hola: para escribir
-COntrol c para deterner un proceso, tambien puedes usar ESC

PAGINAS MAN 
-INDICA UN MANUAL, del codigo que se escriba, ejemplo : man echo 

UBICARSE EN LA LINEA
Para escribir delante de una linea ^A, AL FINAL ^e y ^U Para borrar toda la linea

PARA LIMPIAR clear 
PARA SALIR exit

3. Realice todas las actividades localizadas en los links del portal [ExplainShell.com](https://explainshell.com/) y diga en clases que conclusiones puede tener del artículo.


4. Lea el artículo [Unix/Linux Command Cheat Sheet](https://files.fosswire.com/2007/08/fwunixref.pdf) y diga en clases que conclusiones puede tener del artículo.

![Alt text](image.png)

5. Realice todas las actividades localizadas en los links del portal [Introduction | Command Line Flashcards](https://flashcards.github.io/command_line/introduction.html) y diga en clases que conclusiones puede tener del artículo.

pwd imprime el nombre del directorio de trabajo

cd toma un nombre de directorio como argumento y cambia a ese directorio

ls enumera todos los archivos y directorios en el directorio de trabajo

cp copia archivos o directorios. cp file1 file2copiará el archivo 1 al archivo 2

cd .. Para subir un directorio, utilicecd ..

mkdir toma un nombre de directorio como argumento y luego crea un nuevo directorio en el directorio de trabajo actual.

m.v.
Para mover un archivo a un directorio, utilice mv el archivo de origen como primer argumento y el directorio de destino como segundo argumento.

cat nos permite crear archivos únicos o múltiples, ver el contenido del archivo, concatenar archivos y redirigir la salida en la terminal o archivos.

touch crea un nuevo archivo dentro del directorio de trabajo. Toma un nombre de archivo como argumento y luego crea un nuevo archivo vacío en el directorio de trabajo actual. Aquí usamos touch para crear un nuevo archivo llamado keyboard.txt dentro del directorio

grep significa "impresión de expresión regular global". Busca archivos en busca de líneas que coincidan con un patrón y devuelve los resultados. Es sensible a mayúsculas y minúsculas.

rm borra archivos

rm -r elimina un directorio recursivamente

man commandmuestra el manual para el especificadocommand

chmod ugo file cambia los permisos del archivo a ugo: u son los permisos del usuario, g son los permisos del grupo y o son los permisos de todos los demás. Los valores de u, g y o pueden ser cualquier número entre 0 y 7.


El comando cat nos permite crear archivos únicos o múltiples, ver el contenido del archivo, concatenar archivos y redirigir la salida en la terminal o archivos.

>>toma la salida estándar del comando de la izquierda y la agrega (agrega) al archivo de la derecha. Ejemplo:cat glaciers.txt >> rivers.txt

<toma la entrada estándar del archivo de la derecha y la ingresa en el programa de la izquierda. Ejemplo:cat < lakes.txt

|es una "tubería". el | toma la salida estándar del comando de la izquierda y la canaliza como entrada estándar al comando de la derecha. Puede pensar en esto como una redirección de "comando a comando". Ejemplo:cat volcanoes.txt | wc


6. Vea todos los videos y realice los ejercicios de [Video Series from LearnLinuxTv](https://www.youtube.com/playlist?list=PLT98CRl2KxKHaKA9-4_I38sLzK134p4GJ) y diga en clases que conclusiones puede tener de los videos.

1 habla de una breve introduccion

2 Habla de como crear un vps, entra en linode, selecciona la opcion ubuntu, llenas los datos, conectas la direecion IP, puedes iniciar la consola, escribe root e inicie sesion, puedes escribir otro comandos. 

3 Habla de como installar y configurar xubuntu y virtual box
-Descargamos xubuntu 
-Descargamos virtual box
-Abre virtual box, en file coloca la direccion que se pide, los datos que se piden y luego inicia sesion.

4 el video habla de como navegar por el sistema de archivos, usando los comandos:
-ls para visualizar el contenido del directorio en el que esta -ls / muestra contenido desde el disco duro,  
-ls /home muestra el contenido dentro de home, 
-ls -l / muestra toda la informacion del contenido del directorio
-clear para limpiar la pantalla
-pwd indica en que directorio esta actualmente
-
## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).


2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).


3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).

4. Termine los retos plasmados en los ejercicios del `1` al `94` de `Responsive Web Design`, del apartado `Learn CSS Colors by Building a Set of Colored Markers` del portal `freeCodeCamp`.


5. Realizar los ejercicios del portal o aplicativo `Duolingo` de la `sección 10` del idioma `inglés`.
6. instale `VSCode` en el sistema operativo `Xubuntu`.