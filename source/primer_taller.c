/***************************************************
 * Fecha: 2 de Agosto de 2022
 * Autor: Santiago Nohra Nieto
 * Materia: Computacion Paralela y Distribuida
 * Tema: Primer Taller C
 ****************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void punto1()
{
    /*
    Escribe un programa en C que acepte dos enteros del usuario y calcule el producto de los
    dos enteros.

    Datos de prueba :
    Introduzca el primer entero: 25
    Introduzca el segundo entero: 15
    Salida esperada:
    Producto de los dos enteros anteriores = 375
    */
    int num1, num2;
    printf("Introduzca el primer entero: ");
    scanf("%d", &num1);

    printf("Introduzca el segundo entero: ");
    scanf("%d", &num2);

    /* Se concatena el resultado del producto */
    printf("Producto de los dos enteros anteriores = %d\n", num1 * num2);
}

void punto2()
{
    /*
    Escribe un programa en C para convertir los días especificados en años, semanas y días.
    Nota: Ignore el año bisiesto.

    Datos de prueba :
    Número de días : 1329
    Salida esperada :
    Años: 3
    Semanas 33
    Días: 3
    */

    int numero_dias, anhos, semanas, dias;

    printf("Numero de dias: ");
    scanf("%d", &numero_dias);

    /*Se divide la cantidad total de dias por la unidad correspondiente
      y se resta el valor encontrado a la cantidad total de dias a fin de
      seguir con la siguiente unidad */

    anhos = numero_dias / 365;

    numero_dias -= anhos * 365;

    semanas = numero_dias / 7;

    numero_dias -= semanas * 7;

    printf("Anhos: %d\nSemanas: %d\nDias: %d\n", anhos, semanas, numero_dias);
}

void punto3()
{
    /*
    Escribe un programa en C para calcular la distancia entre los dos puntos.
    Datos de prueba :
    Entrada x1: 25
    Entrada y1: 15
    Entrada x2: 35
    Entrada y2: 10
    Resultado esperado:
    Distancia entre dichos puntos: 11.1803
    */

    int x1, x2, y1, y2;
    printf("Entrada x1: ");
    scanf("%d", &x1);

    printf("Entrada y1: ");
    scanf("%d", &y1);

    printf("Entrada x2: ");
    scanf("%d", &x2);

    printf("Entrada y2: ");
    scanf("%d", &y2);

    /*

    distancia = √((x2-x1)² + (y2-y1)²)

     */

    float resultado = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distancia entre dichos puntos: %.4f\n", resultado);
}

void punto4()
{
    /*
    Escribe un programa en C para mostrar los 10 primeros números naturales.
    Salida esperada :
    1 2 3 4 5 6 7 8 9 10
    */
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i + 1);
    }
    printf("\n");
}

void punto5()
{
    /*

    Escribe un programa en C para mostrar el patrón como triángulo rectángulo usando un
    asterisco. La cantidad de líneas del triangulo es ingresada por consola por el usuario, y el valor
    máximo de líneas es de 14.
    El patrón como :
    *
    **
    ***
    ****

    */

    int numero_lineas, contador = 1;

    printf("Ingrese el numero de lineas: ");
    scanf("%d", &numero_lineas);

    if (numero_lineas > 14)
    {
        printf("El valor maximo de lineas es de 14");
    }
    else
    {
        while (numero_lineas > 0)
        {
            for (int i = 0; i < contador; i++)
            {
                printf("*");
            }
            printf("\n");
            contador++;
            numero_lineas--;
        }
    }
}

void punto6()
{
    /*
    Escribe un programa que imprima una matriz de “1”, de tamaño NxN. El tamaño es
    indicado por el usuario y debe ser siempre menor que 8.
    */
    int tamanio_matriz;
    printf("Ingrese el tamanio de la matriz: ");
    scanf("%d", &tamanio_matriz);

    if (tamanio_matriz < 8)
    {
        for (int i = 0; i < tamanio_matriz; i++)
        {
            for (int j = 0; j < tamanio_matriz; j++)
            {
                printf("1 ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("El tamanio de la matriz debe ser menor a 8\n");
    }
}

void punto7()
{
    /*
    Escribe un programa que imprima una matriz de números aleatorios enteros, entre 0 y 9, de
    de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
    */

    int tamanio_matriz;
    printf("Ingrese el tamanio de la matriz: ");
    scanf("%d", &tamanio_matriz);

    if (tamanio_matriz < 8)
    {
        for (int i = 0; i < tamanio_matriz; i++)
        {
            for (int j = 0; j < tamanio_matriz; j++)
            {
                /* Se genera un numeror random y se saca el mod 10 para solo un digito del numero */
                printf("%d ", rand() % 10);
            }
            printf("\n");
        }
    }
    else
    {
        printf("El tamanio de la matriz debe ser menor a 8\n");
    }
}

void punto8()
{
    /*
    Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
    tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
    Finalmente, se presenta la suma de las dos matrices.
    */
    int tamanio_matriz;
    printf("Ingrese el tamanio de la matriz: ");
    scanf("%d", &tamanio_matriz);

    if (tamanio_matriz < 8)
    {
        printf("Matriz 1\n");
        int matriz1[tamanio_matriz][tamanio_matriz];
        for (int i = 0; i < tamanio_matriz; i++)
        {
            for (int j = 0; j < tamanio_matriz; j++)
            {
                matriz1[i][j] = rand() % 10;
                /* Se genera un numeror random y se saca el mod 10 para solo un digito del numero */
                printf("%d ", matriz1[i][j]);
            }
            printf("\n");
        }

        printf("\nMatriz 2\n");
        int matriz2[tamanio_matriz][tamanio_matriz];
        for (int i = 0; i < tamanio_matriz; i++)
        {
            for (int j = 0; j < tamanio_matriz; j++)
            {
                matriz2[i][j] = rand() % 10;
                /* Se genera un numeror random y se saca el mod 10 para solo un digito del numero */
                printf("%d ", matriz2[i][j]);
            }
            printf("\n");
        }

        printf("\nResultado de la suma matricial:\n");

        for (int i = 0; i < tamanio_matriz; i++)
        {
            for (int j = 0; j < tamanio_matriz; j++)
            {
                /* Se imprime la suma de los elementos de las matrices */
                printf("%d ", matriz1[i][j] + matriz2[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("El tamanio de la matriz debe ser menor a 8\n");
    }
}

void punto9()
{
    /*
    Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
    tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
    Finalmente, se presenta la resta de las dos matrices.
    */
    int tamanio_matriz;
    printf("Ingrese el tamanio de la matriz: ");
    scanf("%d", &tamanio_matriz);

    if (tamanio_matriz < 8)
    {
        printf("Matriz 1\n");
        int matriz1[tamanio_matriz][tamanio_matriz];
        for (int i = 0; i < tamanio_matriz; i++)
        {
            for (int j = 0; j < tamanio_matriz; j++)
            {
                matriz1[i][j] = rand() % 10;
                /* Se genera un numeror random y se saca el mod 10 para solo un digito del numero */
                printf("%d ", matriz1[i][j]);
            }
            printf("\n");
        }

        printf("\nMatriz 2\n");
        int matriz2[tamanio_matriz][tamanio_matriz];
        for (int i = 0; i < tamanio_matriz; i++)
        {
            for (int j = 0; j < tamanio_matriz; j++)
            {
                matriz2[i][j] = rand() % 10;
                /* Se genera un numeror random y se saca el mod 10 para solo un digito del numero */
                printf("%d ", matriz2[i][j]);
            }
            printf("\n");
        }

        printf("\nResultado de la suma matricial:\n");

        for (int i = 0; i < tamanio_matriz; i++)
        {
            for (int j = 0; j < tamanio_matriz; j++)
            {
                /* Se imprime la suma de los elementos de las matrices */
                printf("%d ", matriz1[i][j] - matriz2[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("El tamanio de la matriz debe ser menor a 8\n");
    }
}

void punto10()
{
    /*
    Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
    tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
    Finalmente, se presenta el producto de las dos matrices.
    */

    int tamanio_matriz;
    printf("Ingrese el tamanio de la matriz: ");
    scanf("%d", &tamanio_matriz);

    if (tamanio_matriz < 8)
    {
        printf("Matriz 1\n");
        int matriz1[tamanio_matriz][tamanio_matriz];
        for (int i = 0; i < tamanio_matriz; i++)
        {
            for (int j = 0; j < tamanio_matriz; j++)
            {
                matriz1[i][j] = rand() % 10;
                /* Se genera un numeror random y se saca el mod 10 para solo un digito del numero */
                printf("%d ", matriz1[i][j]);
            }
            printf("\n");
        }

        printf("\nMatriz 2\n");
        int matriz2[tamanio_matriz][tamanio_matriz];
        for (int i = 0; i < tamanio_matriz; i++)
        {
            for (int j = 0; j < tamanio_matriz; j++)
            {
                matriz2[i][j] = rand() % 10;
                /* Se genera un numeror random y se saca el mod 10 para solo un digito del numero */
                printf("%d ", matriz2[i][j]);
            }
            printf("\n");
        }

        int producto[tamanio_matriz][tamanio_matriz];

        for (int i = 0; i < tamanio_matriz; i++)
        {

            for (int j = 0; j < tamanio_matriz; j++)
            {
                int suma = 0;
                for (int k = 0; k < tamanio_matriz; k++)
                {
                    suma += matriz1[j][k] * matriz2[k][i];
                }
                producto[j][i] = suma;
            }
        }

        printf("\nResultado Producto\n");
        for (int i = 0; i < tamanio_matriz; i++)
        {
            for (int j = 0; j < tamanio_matriz; j++)
            {
                /* Se genera un numeror random y se saca el mod 10 para solo un digito del numero */
                printf("%d ", producto[i][j]);
            }
            printf("\n");
        }
    }
}

void bienvenida()
{
    /*Funcion para hacer la bienvenida*/

    printf("#####################################################\n");
    printf("#                                                   #\n");
    printf("#                     BIENVENIDO                    #\n");
    printf("#                 Primer Taller en C                #\n");
    printf("#                                                   #\n");
    printf("#####################################################\n");
}

void leerMenu()
{
    /* Muestra el menu */
    printf("\n###########\n");
    printf("#   Menu  #\n");
    printf("###########\n");
    printf("\n1. Punto 1\n");
    printf("2. Punto 2\n");
    printf("3. Punto 3\n");
    printf("4. Punto 4\n");
    printf("5. Punto 5\n");
    printf("6. Punto 6\n");
    printf("7. Punto 7\n");
    printf("8. Punto 8\n");
    printf("9. Punto 9\n");
    printf("10. Punto 10\n");
    printf("11. Salir\n");
    printf("Ingrese una opcion: ");
}

void ejecutar_seleccion(int eleccion)
{
    switch (eleccion)
    {
    case 1:
        printf("Punto 1: \n\n");
        punto1();
        break;

    case 2:
        printf("Punto 2: \n\n");
        punto2();
        break;

    case 3:
        printf("Punto 3: \n\n");
        punto3();
        break;

    case 4:
        printf("Punto 4: \n\n");
        punto4();
        break;

    case 5:
        printf("Punto 5: \n\n");
        punto5();
        break;

    case 6:
        printf("Punto 6: \n\n");
        punto6();
        break;

    case 7:
        printf("Punto 7: \n\n");
        punto7();
        break;

    case 8:
        printf("Punto 8: \n\n");
        punto8();
        break;

    case 9:
        printf("Punto 9: \n\n");
        punto9();
        break;

    case 10:
        printf("Punto 10: \n\n");
        punto10();
        break;

    case 11:
        printf("Gracias por usar el programa\n");
        break;

    default:
        printf("Opcion invalida\n");
        break;
    }
}

int main()
{
    int eleccion = 0;
    bienvenida();
    while (eleccion != 11)
    {
        leerMenu();
        scanf("%d", &eleccion);
        printf("\n\n");
        ejecutar_seleccion(eleccion);
    }

    return 0;
}