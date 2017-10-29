/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 1; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2017 Nomar Oscar Mora Tovar <nomar@echo1>
  *
 * EjercicioExamen1 is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
  *
 * EjercicioExamen1 is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>

void procesado(int f1, int c1, int f2, int c2, float e[f1][c1], float s[f2][c2]);
void imprime(int f1, int c1, float s[f1][c1]);

int main()
{
 // declaremos el arreglo de datos, para tener algo con que trabajar
 float entrada[10][5] = {
	{1.0, 2017.0, 2.0, 2.0, 100.0},
	{3.0, 2017.0, 2.0, 2.0, 120.0},
	{5.0, 2017.0, 2.0, 2.0, 20.0},
	{100.0, 2017.0, 2.0, 2.0, 120.0},
	{3.0, 2017.0, 2.0, 3.0, 200.0},
	{1.0, 2017.0, 2.0, 3.0, 1000.0},
	{100.0, 2017.0, 2.0, 6.0, 900.0},
	{1.0, 2017.0, 2.0, 3.0, 99.0},
	{4.0, 2017.0, 3.0, 3.0, 10.0},
	{1.0, 2017.0, 6.0, 20.0, 500.0},
};
// declaramos he inicializamos nuestra tabla de datos
float tabla[200][12]={0};

// declaramos nuestra variable para el ciclo
int i = 0;

procesado(10,5,200,12,entrada,tabla);
imprime(200,12,tabla);


// Ahora procedamos a mostrar todo


return (0);
}

void procesado(int f1, int c1, int f2, int c2, float e[f1][c1], float s[f2][c2]) {
 // declaramos nuestra variable para el ciclo
 int i = 0;
 /*
  * Ahora bien, cada fila del arreglo de entrada representa un registro
  * y como tal debemos procesar la fila completa, mas abajo veremos como
  * se hace.
  */
 for (i = 0; i < 9; i++) {

  /*
   * Para facilitar el reconocimiento asignemos los campos (columnas) de la
	* fila (registro) a variables que sean faciles de reconocer, asi tenemos que.
	 */

  // Notese que el tipo de datos de la matriz es float y al final el dato
  // vendedor y mes son datos enteros. Hacemos entonces el cast de tipo a entero
  // de no hacer esto no pasa nada igual lo toma despreciando la parte flotante
  // pero es de personas bien portadas hacer la conversion de tipos, puesto que
  // de no hacerlo asi el compilador lanza un warning.
  int vendedor = (int) e[i][0];
  int mes = (int) e[i][2];
  float monto = e[i][4];

  /*
   * Ahora bien, en la tabla de datos (tabla) las filas representan al vendedor
	* y las columnas los meses. Como los arreglos comienzan a numerarse desde
   * cero debemos restar 1 al valor que esta guardado en la matriz entrada.
   *
   * Si dentro del codigo se coloca variable - X el valor no queda guardado en
   * ninguna parte el computador sencillamente hace el calculo y ya. Para que
   * quede guardado debe haber una asignacion por ejemplo
   *
   * variable1 = variable2 + y;
   * o
   * variable1 = variable1 + y;
   *
   * Como nos piden el total de cada mes por vendedor pues sumamos al valor
   * que ya exista el valor que corresponda segun su mes, es decir que año y
   * dia podemos despreciarlos puesto que no son importantes para lo que queremos
   * hacer.
   *
   * Este es todo el procesamiento que necesitamos para la entrada, luego de
   * capturar los datos en la matriz tabla, vamos a proceder a mostrarla.
   */
  s[ vendedor -1 ][ mes - 1 ] = s[ vendedor -1 ][ mes - 1 ] + monto;
 }
}

void imprime(int f1, int c1, float s[f1][c1]){
 // declaramos nuestra variable para el ciclo
 int i = 0;

 for ( i = 0; i < 179; i++){
  printf("-");
 }

 printf("\n");
 printf("%-9s| %-11s| %-11s| %-11s| %-11s| %-11s| %-11s| %-11s| %-11s| %-11s| %-11s| %-11s| %-11s| %-11s|\n",
        "Vendedor",
        "Enero",
        "Febrero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Agosto",
        "Septiembre",
        "Octubre",
        "Noviembre",
        "Diciembre",
        "Total"
        );
 for ( i = 0; i < 179; i++){
  printf("-");
 }
 printf("\n");

 /*
  * Ahora vamos a procesar los totales, si no los calculamos antes podemos
  * calcularlos ahora. Para los meses creamos un arreglo flotante para  ir
  * guardando los totales a medida que procesamos la tabla.
  */

 float totales_mes[12] = { 0 };

 for ( i = 0; i < 200; i++){
  // Para calcular el total por vendedor podemos hacerlo internamente en el ciclo.
  int j = 0;
  float total_vendedor = 0;

  // Hacemos uso de otro ciclo para acumular lo vendido por el vendedor en el año
  // aca tambien podemos acumular lo que se vendio mes a mes.
  for (j = 0; j < 12; j++) {

   total_vendedor = total_vendedor + s[i][j];

   // Esto suma lo que vendio un vendedor cualquiera en un mes en el total
   // correspondiente a ese mes.
   totales_mes[j] = totales_mes[j] + s[i][j];
  }

  printf("%9d| %11.2f| %11.2f| %11.2f| %11.2f| %11.2f| %11.2f| %11.2f| %11.2f| %11.2f| %11.2f| %11.2f| %11.2f| %11.2f|\n",
         i+1,
         s[i][0],
         s[i][1],
         s[i][2],
         s[i][3],
         s[i][4],
         s[i][5],
         s[i][6],
         s[i][7],
         s[i][8],
         s[i][9],
         s[i][10],
         s[i][11],
         total_vendedor
         );
 }
 for ( i = 0; i < 179; i++){
  printf("-");
 }
 printf("\n");

 // Aca vamos a ver otra forma de imprimir una fila.

 // Si imprimimos sin colocar el \n al final lo que se imprima luego
 // se imprimira en la misma linea.
 printf("%-9s|","Totales");

 // Usamos un ciclo para imprimir cada una de las celdas.
 for (i = 0 ; i < 12 ; i++) {
  printf( " %11.2f|", totales_mes[i]);
 }
 printf("\n");


 for ( i = 0; i < 166; i++){
  printf("-");
 }
 printf("\n");
}
