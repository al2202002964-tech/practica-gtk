# Práctica GTK

## Datos del alumno
Nombre:  
Matrícula: al2202002964  

## Materia
Programación en C / Interfaces Gráficas

## Descripción
Este programa fue desarrollado en lenguaje C utilizando la librería GTK.

La aplicación crea una ventana gráfica que contiene un botón interactivo.
Cuando el usuario presiona el botón, aparece un cuadro de diálogo con un
mensaje en pantalla.

## Funcionalidades
- Ventana principal
- Botón interactivo
- Mensaje emergente al presionar el botón

## Compilación

gcc main.c `pkg-config --cflags --libs gtk+-3.0` -o programa

## Ejecución

./programa
