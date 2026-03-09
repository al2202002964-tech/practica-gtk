# Práctica GTK

## Datos del alumno
Nombre: Ximena Contreras Herrera
Matrícula: 2202002964  

## Materia
SISTEMAS OPERATIVOS

## Descripción

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
