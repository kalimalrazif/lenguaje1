/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 3; tab-width: 3 -*-  */
/*
 * main.c
 * Copyright (C) 2018 Nomar Oscar Mora Tovar <nomarmora@gmail.com>
 * 
 * data_types_size is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * data_types_size is distributed in the hope that it will be useful, but
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
   int un_entero = 0;
   float un_flotante = 0.0;
   double un_doble = 0.0;
   char un_caracter = ' ';
   char un_arreglo_de_caracteres[100] = "";
   int un_arreglo_de_enteros[100] = { 0 };

   printf("Este es el tamaño de un entero: %d\n", sizeof(un_entero));
   printf("Este es el tamaño de un flotante: %d\n", sizeof(un_flotante));
   printf("Este es el tamaño de un doble: %d\n", sizeof(un_doble));
   printf("Este es el tamaño de un caracter: %d\n", sizeof(un_caracter));

   printf("Este es el tamaño de un arreglo de 100 caracteres: %d\n", sizeof(un_arreglo_de_caracteres));
   printf("Este es el tamaño de un arreglo de 100 enteros: %d\n", sizeof(un_arreglo_de_enteros));
   return (0);
}

