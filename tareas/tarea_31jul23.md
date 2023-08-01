# Tarea Jueves HTML5 27 de julio

## teórica

1. Lea el artículo [Installations](https://www.theodinproject.com/lessons/foundations-installations#intel-rst-rapid-storage-technology) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de la instalacion del sistema operativo, que se puede hacer mediante tres metodos:
-Maquina virtual: descargando virtual box y ubuntu. 
-Arranque dual de Ubuntu/ Windows: descargando ubuntu, crear una unidad flash de arranque e instalar ubuntu.
-ChromeOS/ChromeOS Flex: Instalar google chrome y elegir un sistema operativo ya sea Linux o MacOS


2. Lea el artículo [UbuntuFlavors](https://wiki.ubuntu.com/UbuntuFlavors) y diga en clases que conclusiones puede tener del artículo.

Conclusiones Ubunto flavors, habla de los sabores de ubunto, que es otro tipo de ubuntu diferente al simple, en el podemos encontrar los diferentes flavors o sabores: Kubunto , Edubuntu, Xubuntu,  Estudio Ubuntu, Lubuntu, Ubuntu Kylin, Ubuntu MATE, Ubuntu Budgie, Unidad de Ubuntu, Ubuntu Canela.


3. Lea el artículo [Microsoft Visual C++ Redistributable latest supported downloads](https://learn.microsoft.com/en-us/cpp/windows/latest-supported-vc-redist?view=msvc-170#visual-studio-2015-2017-2019-and-2022) y diga en clases que conclusiones puede tener del artículo.

en conclusion: el articulo habla de las ultimas descargas compatibles de Microsoft Visual C++ Redistributable:
-Los paquetes redistribuibles de Microsoft Visual C++, compatibles con  Visual Studio 2015, 2017, 2019 y 2022 son: ARM64, X86, X64.
-Los paquetes de Microsoft Visual C++, compatibles para Visual Studio 2013 son X86 12.0.40664.0 y X64 12.0.40664.0.
-Los paquetes de Microsoft Visual C++, compatibles para Visual Studio 2012 son X86 	11.0.61030.0	 y X64 	11.0.61030.0.
-Visual Studio 2010 (VC++ 10.0) SP1 (ya no se admite)
- Visual Studio 2008 (VC++ 9.0) SP1 (ya no se admite)
-Visual Studio 2005 (VC++ 8.0) SP1 (ya no se admite)


4. Lea el artículo [Enabling Intel VT-x and AMD-V Virtualization Hardware Extensions in BIOS](https://access.redhat.com/documentation/en-us/red_hat_enterprise_linux/7/html/virtualization_deployment_and_administration_guide/sect-troubleshooting-enabling_intel_vt_x_and_amd_v_virtualization_hardware_extensions_in_bios) y diga en clases que conclusiones puede tener del artículo.


5. Lea el artículo [Virtualization (VT-x/AMD-V) - Enabling virtualization on your computer for running 2N® Access Commander](https://2nwiki.2n.cz/pages/viewpage.action?pageId=75202968) y diga en clases que conclusiones puede tener del artículo.

Este articulo habla de la Habilitación de extensiones de hardware de virtualización Intel VT-x y AMD-V en el BIOS, los pasos que hay que seguir para ello son: 
-Reiniciar el equipo y abrir el menu del Bios 
-Habilitar las extensiones de virtualizacion en el BIOS: para eso: procesador >> chipset, configuracion avanzada de CPU O Northbridge: Habilitar la tecnologia de visualizacion Intel , que estan etiquetadas como extensiones de virtualización, Vanderpool u otros nombres según el OEM y el BIOS del sistema; Habilitar Intel VT-d o AMD IOMMU; guardar, salir y reiniciar.

6. Lea el artículo [Increasing disk space in your Xubuntu VM](https://discord.com/channels/505093832157691914/690588860085960734/1015965403572351047) y diga en clases que conclusiones puede tener del artículo.


7. Vea el video [How to switch from mouse to touchscreen in VirtualBox 6](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/Pages_sites_servers_and_search_engines) y diga en clases que conclusiones puede tener del video.


8. Lea el artículo [HMR3Init: Attempting fall back to NEM (Hyper-V is active)](https://forums.virtualbox.org/viewtopic.php?f=25&t=99390) y diga en clases que conclusiones puede tener del artículo. OJO, está página está bloqueada en Venezuela por ser propiedad de Oracle, abra el link con el browser Opera y active el vpn.

Para apagar Hyper-V por completo, haga lo siguiente:
-Cerrar los programas, apagar, desconectar y reiniciar su host
- Si no puede instalar host de 64 bits entonces revise que se esten ejecutando: 
*Integridad del código protegido por hipervisor (HVCI), también conocida como integridad de la memoria 
*DeviceGuard
*Integridad de la memoria 
*CredentialGuard
*Aislamiento del núcleo de Windows Defender
-Busque el icono del símbolo del sistema, haga clic con el botón derecho y elija Ejecutar como administrador.
- Introduzca este comando:
bcdedit /set hypervisorlaunchtype desactivado

Algunos informan que este comando también era necesario:

DISM /En línea /Deshabilitar-Característica:Microsoft-Hyper-V

- Introduzca este comando:

apagado -s -t 2
-La computadora se va a apagar, desconectala y vuelvela a conectar y arranca otra vez

9. Lea el artículo [see these AskUbuntu instructions for more information](https://askubuntu.com/questions/285689/increase-mouse-wheel-scroll-speed/621140#621140) y diga en clases que conclusiones puede tener del artículo.

    El articulo habla de como Aumentar la velocidad de desplazamiento de la rueda del ratón, ademas de poder hacerlo con la opcion que esta en ajustes, o con la Qt-Applications utilizando la configuracion KDE, puedes hacerlo con la base de datos de hardware systemd.imwheel libinput, ese es un ejemplo para casos futuros en los que Qt-Applications presente fallos.

10. Lea el artículo [How to Create Ubuntu Live USB in Windows](https://itsfoss.com/create-live-usb-of-ubuntu-in-windows/) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de cómo crear un USB de arranque de Ubuntu en Windows, que puede ser mediante dos metodos: Rufus (recomendado) e Instalador USB universal.


11. Lea el artículo [Ubuntu flavours](https://ubuntu.com/desktop/flavours) y diga en clases que conclusiones puede tener del artículo.

El articulo habla sobre ubuntu flavours que son los sabores de ubuntu, Los sabores de Ubuntu son propiedad y están desarrollados por miembros de la comunidad global y están respaldados por el archivo completo de Ubuntu para paquetes y actualizaciones. Los sabores de ubuntu son: 
Edubuntu, Kubuntu, Lubuntu, Ubuntu Budgie, Ubuntu Canela,  
Ubuntu Kylin, Ubuntu MATE, Estudio Ubuntu, Unidad de Ubuntu, 
Xubuntu.

12. Lea el artículo [How to install Ubuntu 20.04 and dual boot alongside Windows 10](https://medium.com/linuxforeveryone/how-to-install-ubuntu-20-04-and-dual-boot-alongside-windows-10-323a85271a73) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de como instalar Ubuntu 20.04 y arranque dual junto con windows 10: 
1 Lo primero es descargar el archivo ISO de Ubuntu que desea instalar. Es posible que su navegador le pregunte si desea guardar el archivo o abrirlo. Recomendaría guardarlo. Descargar e instalar UNetbootin , Rufus o balena Etcher.
2 Seleccione el archivo ISO. Luego, debe seleccionar la memoria USB que conectó a su computadora y que desea usar como medio de instalación
3 Preparación para Windows, "Crear y formatear particiones de disco duro,  debería abrirse una nueva ventana llamada Administración de discos.
4 Haga clic con el botón derecho en la partición que desea reducir para que haya espacio libre disponible. Luego, haga clic en "Reducir volumen ..." en el menú contextual.
5 A continuación, debe elegir cuánto almacenamiento desea poner a disposición. Ingrese la cantidad de Mega Bytes que desea tener para su instalación de Ubuntu. Una vez más, recomendaría tener al menos 36 GB. Haga clic en el botón "Reducir".
6 Proceda a instalar ubuntu



13. Lea el artículo [Workaround to Install Ubuntu 20.04 with Intel RST systems](https://askubuntu.com/questions/1233623/workaround-to-install-ubuntu-20-04-with-intel-rst-systems/1233644#1233644) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de la Solución alternativa para instalar Ubuntu 20.04 con sistemas Intel RST, para ello se siguen los siguientes pasos:
*Haga clic con el botón secundario en el menú Inicio de Windows. Elegir.Command Prompt (Admin)
*Si no aparece en la lista, es porque ya se ha actualizado a una versión posterior de Windows. Si es así, use este método para llegar al símbolo del sistema:Command Prompt
*Haga clic en el botón Inicio y escriba cmd
*Haga clic con el botón derecho en el resultado y seleccione Run as administrator
*Escriba este comando y presione ENTRAR: bcdedit /set {current} safeboot minimal
*Si este comando no funciona para usted, pruebe bcdedit /set safeboot minimal
*Reinicie la computadora e ingrese a la configuración del BIOS (la tecla para presionar varía según el sistema).
*Cambie el modo de operación SATA a AHCI desde IDE o RAID (nuevamente, el idioma varía).
*Guarde los cambios y salga del programa de instalación y Windows se iniciará automáticamente en modo seguro.
*Haga clic con el botón derecho en el menú Inicio de Windows una vez más. Elegir Command Prompt (Admin)
*Escriba este comando y presione ENTRAR: bcdedit /deletevalue {current} safeboot
*Si tuvo que probar el comando alternativo anterior, es probable que deba hacerlo aquí también: bcdedit /deletevalue safeboot
*Reinicie una vez más y Windows se iniciará automáticamente con los controladores AHCI habilitados.


14. Lea el artículo [ChromeOS Systems Supporting Linux on ChromeOS](https://www.chromium.org/chromium-os/chrome-os-systems-supporting-linux/) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de los Sistemas ChromeOS compatibles con Linux en ChromeOS, Ejemplo: Los Chromebooks, Chromeboxes y Chromebases lanzados antes de 2019 que admiten Linux en ChromeOS son: Acer, ASUS, CTL, Dell,Edugear,  Edxis, Google (en inglés),  Haier, HP,Lenovo-, Mecer, Chromebook multiláser M11C, PCMerge, Poin2, Positivo, Prowise, Samsung, ViewSonic


15. Lea el artículo [Lista de modelos certificados](https://support.google.com/chromeosflex/answer/11513094) y diga en clases que conclusiones puede tener del artículo.

El articulo habla sobre los modelos que puedes usar con ChromeOS Flex, que son:  Acer, Advantech, AOPEN, Apple, ASUS, Azulle,Cybernet, Dell, Dynabook, ECS, Elo, Fujitsu, Gaida, HP, IBASE, INP, Intel, Justice, Lenovo, LG, Microsoft, Minisforum, Naver, Panasonic, Satsuki, Seneca, Sharp, Techno Horizon, Toshiba y Zotac.

16. Lea el artículo [Set up Linux on your Chromebook](https://support.google.com/chromebook/answer/9145439?hl=en) y diga en clases que conclusiones puede tener del artículo.

El articulo habla de como configurar Linux en tu Chromebook: 

PUEDES ACTIVARLO CON LOS SIGUIENTES PASOS:
1 En tu Chromebook, en la parte inferior derecha, selecciona la hora.
2 Seleccione Configuración  Y entonces avanzada Y entonces de desarrolladores.
3 Junto a "Entorno de desarrollo Linux", selecciona Activar.
4 Siga las instrucciones que aparecen en pantalla. La instalación puede tardar 10 minutos o más.
5 Se abre una ventana de terminal. Tiene un entorno Debian 11 (Bullseye). Puede ejecutar comandos de Linux, instalar más herramientas con el administrador de paquetes APT y personalizar su shell.

DESACTIVAR LINUX CON LOS SIGUIENTES PASOS 
1 En la parte inferior derecha, selecciona la hora.
2 Seleccione Configuración  Y entonces Desarrolladores avanzados Y entonces Entorno Y entonces de desarrollo Linux.
3 En "Eliminar entorno de desarrollo de Linux", seleccione Quitar.

17. Lea el artículo [Installation errors on deb files - '_apt'. - pkgAcquire::Run (13: Permission denied)](https://www.reddit.com/r/linux4noobs/comments/ux6cwx/comment/i9x2twx/) y diga en clases que conclusiones puede tener del artículo.

El articulo habla sobre los errores de instalacion en deb files - '_apt'. - pkgAcquire::Run (13: Permission denied ) que presenta un usario, otro usuario de la plataforma le explica que no es un error sino que es solo un aviso, que no hay nada que se deba de arreglar, casi todo funciono como era esperado 

## Práctica

1. Realice el ejercicio [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false) del portal [HackerRank](https://www.hackerrank.com/dashboard).

2. Haga los `ejercicios del 8 al 10` de los apartados de [c](https://www.hackerrank.com/domains/c), [c++](https://www.hackerrank.com/domains/cpp), [java](https://www.hackerrank.com/domains/java), [python](https://www.hackerrank.com/domains/python), [Ruby](https://www.hackerrank.com/domains/ruby), [SQL](https://www.hackerrank.com/domains/sql), [Linux shell](https://www.hackerrank.com/domains/shell), del portal [HackerRank](https://www.hackerrank.com/dashboard).

3. Crea tu resume haciendo uso de la [plantilla](https://docs.google.com/document/d/1jfUa4HGBDjt2peJPQ0Wg1YhdGkCoSysS6QMT4u8bCic/edit?usp=sharing).

4. Termine los retos plasmados en los ejercicios del `1` al `94` de `Responsive Web Design`, del apartado `Learn CSS Colors by Building a Set of Colored Markers` del portal `freeCodeCamp`.
5. Realizar los ejercicios del portal o aplicativo `Duolingo` de la `sección 9` del idioma `inglés`.