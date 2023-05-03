#include <stdio.h> 

void soma(int *vetor1, int *vetor2, int *vetor3, int n){
   for(int i = 0; i < n; i++){
      vetor3[i] = vetor1[i] + vetor2[i];
   }
}

int main(void){
   int *vet1, *vet2, *vet3, n;

   printf("Tamanho dos vetores: ");
   scanf("%d", &n); 
   
   vet1 = malloc(n * sizeof(int));
   vet2 = malloc(n * sizeof(int));
   vet3 = malloc(n * sizeof(int));

   for (int i=0; i<n; i++){
      printf("Valor %d: ", (i+1));
      scanf("%d", &vet1[i]);
   }

   printf("\n");

   for (int i=0; i<n; i++){
      printf("Valor %d: ", (i+1));
      scanf("%d", &vet2[i]);
   }

   printf("\n");

   soma(vet1, vet2, vet3, n);

   printf("ULTIMO VETOR:\n");
   for (int i=0; i<n; i++){
      printf("Valor %d: ", (i+1));
      printf("%d", vet3[i]);
      printf("\n");
   }

   free(vet1);
   free(vet2);
   free(vet3);

   return 0;
}
