#include <stdio.h> 
#include <stdlib.h> //Fundamental para o uso da função qsort.

int comparar(const void *a, const void *b) { //Essa função recebe dois números do vetor e em seguida os compara.
   return (*(float*)a > *(float*)b); //Se o valor de a for maior do que o valor de b o resultado será maior que
   //zero e dessa forma, o primeiro valor é identificado como maior que o segundo.
}

int main(void){
   float n, *vetor; //Criando a variável n (número de termos do vetor) e o vetor.
   scanf("%f", &n); //Recebendo o número de termos do vetor.
   vetor = malloc(n * sizeof(float)); //Alocando o espaço para o vetor através do parâmetro n na função malloc.

   for (int i=0; i<n; i++){   
      scanf("%f", &vetor[i]); //Lendo elementos e colocando no vetor.
   }
   
   qsort(vetor, n, sizeof(float), comparar); //Fazendo a ordenação do vetor através da função qsort.

   for (int i=0; i<n; i++){
      printf("%.2f\n", vetor[i]); //Exibindo os elementos do vetor em ordem crescente.
   }

   free(vetor);  //Liberando a memória, afinal para cada malloc deve haver um free.

   return 0;
}