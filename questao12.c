#include <stdio.h>

/*
   Um ponteiro para função é um recurso que permite que o endereço de uma função seja armazenado em uma determinada 
   variável e futuramente chamada pelo ponteiro. Os ponteiros para função são usados para permitir que funções possam
   ser passadas como argumentos para outras funções, o que faz com que haja uma enorme otimização dentro do código em 
   conjunto com a elasticidade de lógica que se possa ter.
*/

//Exemplo de código com ponteiro para função:

int soma(int *n){
   (*n)++;
}

int main(void){
   int (*sum)(int *), a = 0;

   for (int i=0; i<5; i++){
      soma(&a);
      printf("%d\n", a);
   }
   return 0;
}