/***************************************************
 * Fecha: 2 de Agosto de 2022
 * Autor: Santiago Nohra Nieto
 * Materia: Computacion Paralela y Distribuida
 * Tema: Primer Taller C
 * Topico: Archivo principal para la APP primer_taller
 ****************************************************/

#include <stdio.h>
#include "primer_taller_lib.h"

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