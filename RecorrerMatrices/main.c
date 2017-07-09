#include <stdio.h>

int main(int argc, char *argv[])
{
    int f = 3, c = 3;
    int Matriz[f][c];
    int i,j;
    for (i = 0; i < f; i++){
        for (j = 0; j < f; j++){
            printf("Introduzca el valor [%d:%d] ", i+1, j+1);
            scanf("%d", &Matriz[i][j]);
        }
    }
    printf("Mostremos los datos ahora....\n");
    
    for (i = 0; i < f; i++){
        for (j = 0; j < f; j++){
            printf("%5d", Matriz[i][j]);
        }
        printf("\n");
    }
    printf("Press enter to continue ...");
    system("pause");
    return 0;

}
