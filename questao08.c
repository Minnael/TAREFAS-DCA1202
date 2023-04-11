#include <stdio.h>

/*
   O seguinte programa imprime todos os elementos do vetor (vet) por meio da expressão *(vet + i) que quando (i)
   recebe valores de 0 a 2 ele retorna os valores 4, 9 e 13. *(vet + i) é igual em termos de retorno a vet[i].
*/
int main(){
   int vet[] = {4,9,13};
   int i;

   for(i=0;i<3;i++){
      printf("%d ",*(vet+i));
   }
}

/*
   O seguinte programa é responsável por retornar os endereços dos valores dos elemento do vetor (vet), para isso é 
   utilizado o %X no printf e a expressão (vet + 1) que seleciona os endereços.
*/
int main(){
   int vet[] = {4,9,13};
   int i;
   for(i=0;i<3;i++){
      printf("%X ",vet+i);
   }
}

