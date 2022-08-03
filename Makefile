#***************************************************
# * Fecha: 2 de Agosto de 2022
# * Autor: Santiago Nohra Nieto
# * Materia: Computacion Paralela y Distribuida
# * Tema: Introduccion al lenguaje de programacion C
# * Topico: Script de automatizacion de compilacion
#****************************************************/

GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=c99
MATHFLAG = -lm 

PROGRS = primer_taller_main

all: &(PROGRS)

# @ es el nombre de la comanda (funcion)

# Lo de abajo es equivalente a gcc -c Proyecto_BMI_2_main.c, gcc -c Proyecto_BMI_2_lib.c, gcc -o appIMC Proyecto_BMI_2_lib.o Proyecto_BMI_2_main.o -lm 

primer_taller_main:
	$(GCC) $(FLAGS) -c $@.c
	$(GCC) $(FLAGS) -c primer_taller_lib.c
	$(GCC) $(FLAGS) -o $@ $@.o primer_taller_lib.o $(MATHFLAG)

# Para eliminar ls

clean:
	$(RM) *.o $(PROGRS)