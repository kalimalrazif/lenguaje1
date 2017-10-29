#include <stdio.h>
#include <stdlib.h>

struct p {
   int *p;
   int total;
   int count;
};


int creaPila(struct p *pil, int tamano);
int isFull(struct p pil);
int isEmpty(struct p pil);
int count(struct p pil);
int push(struct p *pil, int valor);
int pop(struct p *pil, int *valor);

int main()
{
    struct p pilita;
    creaPila(&pilita, 10);
    push(&pilita, 11);
    push(&pilita, 3);
    push(&pilita, -2);
    push(&pilita, 1000);
    int v = 0;
    while(pop(&pilita,&v) != -10){
      printf("Sacando de la pila: %d\n", v);
    }
    return 0;
}

int creaPila(struct p *pil, int tamano){
   if (tamano < 1) { return -100; }
   int pila[tamano];
   int i = 0;

   /* Cuando el loop consta de solo una linea no es obligatorio colocar las {}
    * hago esto porque mi compilador me dio error en la instruccion int pila[tamano] = {0}
    * no todos los compiladores son iguales.
    */
   for (i = 0; i < tamano; i++)
      pila[i] = 0;

   pil->p = pila;
   pil->total = tamano;
   pil->count = 0;
   return 1;
}

int isFull(struct p pil){
   if (pil.count == pil.total) { return 1;}

   return 0;
}

int isEmpty(struct p pil){
   if (pil.count == 0) { return 1;}

   return 0;
}

int count(struct p pil){
   return pil.count;
}

int push(struct p *pil, int valor){
   if(isFull(*pil)) { return -10; }
   pil->p[pil->count] = valor;
   pil->count++;
   return 1;
}

int pop(struct p *pil, int *valor){
   if(isEmpty(*pil)){ return -10; }
   *valor = pil->p[pil->count-1];
   pil->count--;
   return 1;
}
