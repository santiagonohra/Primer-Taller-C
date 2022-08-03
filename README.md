<p align="center">
<i><b>Computación Paralela y Distribuida</b></i>
<br>
<img src="https://res-5.cloudinary.com/crunchbase-production/image/upload/c_lpad,h_256,w_256,f_auto,q_auto:eco/v1455514364/pim02bzqvgz0hibsra41.png"
width="150" height="150">
</img>
<br>
<i><b>Estudiante/Autor:</b></i>
<br>
Santiago Nohrá Nieto
<br>
<i><b>Docente:</b></i><br> John Jairo Corredor Franco, PhD.
<br>
<i><b>Tema:</b></i><br> Primer Taller en C
<br>
<i><b>Fecha inicio:</b></i><br> 02/08/2022
<br>
<i><b>Fecha entrega:</b></i><br> 10/08/2022
<br>
<b> Bogotá D.C. </b>
</p>

# Enunciado

**Fecha**: Julio de 2022

**Docente**: John Corredor, PhD

**Parallel and Distributed Computing**

**Primer Taller C**

## **Punto 1** 

### Escribe un programa en C que acepte dos enteros del usuario y calcule el producto de los dos enteros.

Datos de prueba :

Introduzca el primer entero: 25

Introduzca el segundo entero: 15

Salida esperada:

Producto de los dos enteros anteriores = 375


## **Punto 2** 

### Escribe un programa en C para convertir los días especificados en años, semanas y días.

Nota: Ignore el año bisiesto.
Datos de prueba :

Número de días : 1329

Salida esperada :

Años: 3

Semanas 33

Días: 3


## **Punto 3** 

### Escribe un programa en C para calcular la distancia entre los dos puntos.

Datos de prueba :

Entrada x1: 25

Entrada y1: 15

Entrada x2: 35

Entrada y2: 10

Resultado esperado:

Distancia entre dichos puntos: 11.1803


## **Punto 4**

### Escribe un programa en C para mostrar los 10 primeros números naturales.

Salida esperada :

1 2 3 4 5 6 7 8 9 10


## **Punto 5** 
### Escribe un programa en C para mostrar el patrón como triángulo rectángulo usando un asterisco. La cantidad de líneas del triangulo es ingresada por consola por el usuario, y el valor máximo de líneas es de 14.

El patrón como :

x

xx

xxx

xxxx

(Con asteriscos (*))


## **Punto 6** 
### Escribe un programa que imprima una matriz de “1”, de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.

## **Punto 7** 
### Escribe un programa que imprima una matriz de números aleatorios enteros, entre 0 y 9, de de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.

## **Punto 8** 
### Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8. Finalmente, se presenta la suma de las dos matrices.

## **Punto 9** 
### Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8. Finalmente, se presenta la resta de las dos matrices.

## **Punto 10** 
### Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8. Finalmente, se presenta el producto de las dos matrices.



# Desarrollo

Para dar solución al taller se hizo uso de archivos main, lib y header para ejecutar el proyecto planteado en C. El archivo **primer_taller_main.c** contiene el método ejecutable main del proyecto, el cual hace llamados a las funciones de **bienvenida()** la cual muestra un membrete al usuario indicando qué programa esta usando, **leerMenu()**, la cual imprime en pantalla todas las opciones disponibles para mostrar la solución a los puntos planteados por el enunciado, y por ultimo **ejecutar_seleccion()**, la cual es responsable de leer la accion o decision del usuario y a partior de esta hacer los debidos llamados a las funciones contenedoras de las soluciones a los puntos (**punto1(), punto2(), .. , punto10()**) según corresponda.

El archivo **primer_taller_lib.c** contiene todas las funciones mencionadas en el párrafo anterior, como las funciones contenedoras de las soluciones a los puntos (**punto1(), punto2(), .. , punto10()**) aisladas las unas de las otras, las funciones de control y seleccion de entrada del usuario y demás.

Por último, el archivo **primer_taller_lib.h** es el archivo header del proyecto, el cual define las funciones propias que fueron creadas a fin de dar solución a los múltiples problemas planteados.

# Compilación y Ejecución del Proyecto

Para compilar y posteriormente ejecutar el proyecto, es indispensable tener un compilador de c, se recomienda por defecto el **gcc 11.2.0**, ya que fue el usado y establecido por el autor del proyecto. Una vez se cumpla con el requisito previo, se procede a hacer uso del **Makefile** incluido en el proyecto con la siguiente linea de codigo: ***make primer_taller_main***, inherentemente, se debe estar situado en la carpeta del proyecto con los ficheros encontrados en el repositorio para poder hacer el fichero usando el Makefile exitosamente. Una vez se compile el proyecto, se generará un archivo ejecutable **primer_taller_main** el cual se puede ejecutar con el comando **./primer_taller_main**.

# Ejemplo de uso
