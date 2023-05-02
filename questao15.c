#include <stdio.h> 

int comparar(const void *a, const void *b){ //Definicao da funcao de comparacao.
   return (*(int*)a > *(int*)b); //Fazendo a comparacao e retornando quem é maior que quem. 
}

void msort(int *vetor, int n, int (*comp)(const void*,const void*)){
   int aux; //Variavel utilizada para auxiliar o funcionamento do algoritmo.
   for(int i = 0; i<n-1; i++){ //For utilizado para percorrer até i<n-1.
      for(int j = n-1; j>i; j--){ //For utilizado para percorrer até j>1 dado que j apenas decresce.
         if(comp(vetor+j-1, vetor+j) > 0){//Caso a comparacao retorne um valor maior que zero...
            aux = vetor[j-1]; //...A funcao auxiliar receberá o valor anterior.
            vetor[j-1] = vetor[j]; //O valor anterior será igual ao atual.
            vetor[j] = aux; //E agora o valor atual será igual ao auxiliar que é o outro anterior.
         }
      }
   }
}

int main(void){
   int n, *vetor; //Definicao de n (número de elementos do vetor), definicao do vetor que será ordenado. 
   scanf("%d", &n); //Captura do númerod e elementos do vetor (n).
   vetor = malloc(n * sizeof(int)); //Alocando o array (vetor) utilizando a funcao malloc().

   for (int i=0; i<n; i++){  //Capturando cada elemento através da funcao scanf().
      scanf("%d", &vetor[i]); 
   }

   msort(vetor, n, comparar); //Utilizaando a funcao msort para ordenar os inteiros contidos no nosso array (vetor).

   for (int i=0; i<n; i++){ //Imprimindo na saída cada elemento do vetor através da funcao printf().
      printf("%d ", vetor[i]);
   }

   free(vetor); //Liberando a memória, afinal cada malloc tem que ter seu free (e não mais que um free()).

   return 0;
}