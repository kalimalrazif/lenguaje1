/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 3; tab-width: 3 -*-  */
/*
 * main.c
 * Copyright (C) 2018 Nomar Oscar Mora Tovar <nomarmora@gmail.com>
 * 
 * aritmetica_punteros is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * aritmetica_punteros is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
int main()
{
   d arreglo_enteros[10] = { 9, 8, 7, 6, 5 ,4 ,3 ,2 ,1 ,0 };
   int *ptr_arreglo_enteros = &arreglo_enteros;
   int i;

   /*
    * arrego_enteros[0] es igual a *ptr_arreglo_enteros
    * arreglo_enteros[1] es igual a *(ptr_arreglo_enteros + 1)
    * arreglo_enteros[2] es igual a *(ptr_arreglo_enteros + 2)
    */
   for(i = 0; i < 10; i++) {
      printf("Valor del arreglo posicion %d: %d\nValor en puntero: %d\n", i, arreglo_enteros[i], *(ptr_arreglo_enteros + i));
      printf("Direccion de memoria %p\n", ptr_arreglo_enteros + i);
   }

   
   double arreglo_dobles[10] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0, 0.0 };
   double *ptr_arreglo_dobles = &arreglo_dobles;

   for(i = 0; i < 10; i++) {
      printf("Valor del arreglo posicion %d: %f\nValor en puntero: %f\n", i, arreglo_dobles[i], *(ptr_arreglo_dobles + i));
      printf("Direccion de memoria %p\n", ptr_arreglo_dobles + i);
   }
   return (0);
}

