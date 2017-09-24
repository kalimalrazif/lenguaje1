#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct p {
   float x;
   float y;
};

float restacuadrada(float a, float b);

int main()
{
   struct p p1,p2;
   printf("Determinemos la longitud de un segmento de recta!!!\n");

   printf("Introduce por favor el primer punto\nX: ");
   scanf("%f", &p1.x);
   printf("Y: ");
   scanf("%f", &p1.y);
   printf("Vamos con el punto 2\nX: ");
   scanf("%f",&p2.x);
   printf("Y: ");
   scanf("%f",&p2.y);

   float longitud = sqrtf(restacuadrada(p1.x, p2.x) + restacuadrada(p1.y,p2.y));

   printf("La longitud del segmento de recta es %f\n", longitud);

   return 0;
}

float restacuadrada(float a, float b){
   float resta = b - a;
   return resta * resta;
}
