#include <stdio.h>
#include <stdlib.h>

/*
 * Esta es la forma de pasar parametros por valor
 */
int suma(int, int);

/*
 * Esta funcion devuelve el resultado de la potenciacion en el primer parametro
 */
void potencia(double *, int);

/*
 * Esta es la forma de pasar un arreglo por parametro
 * ADVERTENCIA:
 * Los arreglos SIEMPRE pasan por referencia, tengan cuidado.
 */
double promedio(int cant, int arreglo[cant]);

/*
 * Si pasamos una matriz como parametro
 */

void inicializa (size_t fil,size_t col,int[fil][col]);

int main()
{
    int valores[3] = {3, 5, 20};
    int a=5, b=10, exp = 2;
    int resultado = 0;
    double bas = 2.0;

    int matriz[3][3] = {0};
    int i,j;

    resultado = suma(a,b);
    // Notese que los valores de a y b no se ven afectados;
    printf("%d es el resultado de la suma de %d y %d\n", resultado, a, b);
    printf("el promedio es: %6.2f\n", promedio(3,valores));
    printf("El resultado de %4.0f elevado a la %d es: ",bas,exp);
    potencia(&bas,exp);
    printf("%4.0f\n",bas);
    printf("antes\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
            printf ("%d ",matriz[i][j]);
        printf("\n");
    }
    inicializa(3,3,matriz);
    printf("\ndespues\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
            printf ("%d ",matriz[i][j]);
        printf("\n");
    }
    system("pause");
    return 0;
}

/*
 * Los datos que pasemos como parametro no se veran afectados
 */
int suma(int a, int b) {
    int total = a + b;
    // Para probarlo modifiquemos a y b
    a = a + 10;
    b = b - 10;
    return total;
}

void potencia(double *base, int exponente){
    int i = 0;
    double total = 1;
    for (i=0;i<exponente;i++){
        total = total * (*base);
    }
    (*base) = total;
    return;
}

/*
 * Definimos el tamaño del arreglo en el primer parametro
 * y luego pasamos en el segundo parametro el arreglo.
 */

double promedio(int cant, int arreglo[cant]) {
    int total=0,i=0;
    double resp=0;
    for(i=0;i<cant;i++){
        total=+arreglo[i];
    }
    resp = (double)total/(double)cant;

    return resp;
}

void inicializa(size_t fil, size_t col, int m[fil][col]) {
    int i,j;
    for(i=0;i<fil;i++){
        for(j=0;j<col;j++){
            m[i][j] = 1;
        }
    }
    return;
}
