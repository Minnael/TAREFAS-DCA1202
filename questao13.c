#include <stdio.h>

int main(void){
   float n, aux, *vetor;
   scanf("%f", &n);
   vetor = malloc(n * sizeof(float));

   for (int i=0; i<n; i++){   
      scanf("%f", &vetor[i]);
   }

   for (int i=0; i<n; i++){
      for (int j=i+1; j<n; j++){
         if (vetor[i] > vetor[j]){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
         }
      }
   }

   for (int i=0; i<n; i++){
      printf("%.2f\n", vetor[i]);
   }

   free(vetor);

   return 0;
}