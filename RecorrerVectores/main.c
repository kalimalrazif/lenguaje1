#include <stdio.h>

int main(int argc, char *argv[])
{
    int tope = 3;
    int MiVectorEntero[tope];
    int i = 0;
    for (i = 0; i < tope; i++) { // Con este loop o ciclo rellenamos el vector.
        printf("Por favor introduce un numero: ");
        scanf("%d",&MiVectorEntero[i]); // Con esta instruccion el usuario puede introducir datos
    }
    
    printf("Ahora vamos a ver que numeros pusiste....\n");
    for (i = 0; i < tope; i++) {
        printf("Dato nro %d: %d\n", i+1, MiVectorEntero[i]); // En este printf damos algo de formato a la salida de los datos.
    }
    system("pause");	
    return 0;
}
