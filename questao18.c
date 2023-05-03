#include <stdio.h>
#include <stdlib.h>

void alocaM(int **m, int l, int c){
   for(int i = 0; i < l; i++){
      for(int j = 0; j < c; j++){
         printf("a%d,%d: ",i,j);
         scanf("%d",&m[i][j]);
      }
   }
}

void multiplicaM(int **Ma, int **Mb, int **Mc, int lA, int cA, int cB){
   int soma = 0;

   for(int i = 0; i < lA; i++){
      for(int j = 0; j < cB; j++){
         for(int x = 0; x < cA; x++){
            soma += Ma[i][x] * Mb[x][j];
         }
         Mc[i][j] = soma;
         soma = 0;
      }
   }
}

void imprimeM(int **m, int l, int c){
   for(int i = 0; i < l; i++){
      printf("[");
      for(int j = 0; j < c; j++){
         printf("%d ",m[i][j]);
      }
      printf("]\n");
   }
}

int main(){
   int **matA, **matB, **matC;
   int linhaA, colunaA, linhaB, colunaB, linhaC, colunaC;

   printf("Quantidade de linhas da matriz A: ");
   scanf("%d",&linhaA);
   printf("Quantidade de colunas da matriz A: ");
   scanf("%d",&colunaA);

   matA = malloc(linhaA * sizeof(int*));
   matA[0] = malloc(linhaA * colunaA * sizeof(int));

   for(int i = 1; i < linhaA; i++)
      matA[i] = matA[i - 1] + colunaA;
    
   alocaM(matA,linhaA,colunaA);

   printf("Quantidade de linhas da matriz B: ");
   scanf("%d",&linhaB);
   printf("Quantidade de colunas da matriz B: ");
   scanf("%d",&colunaB);

   matB = malloc(linhaB * sizeof(int*));
   matB[0] = malloc(linhaB * colunaB * sizeof(int));

   for(int i = 1; i < linhaB; i++)
      matB[i] = matB[i - 1] + colunaB;
    
   alocaM(matB,linhaB,colunaB);

   linhaC = linhaA;
   colunaC = colunaB;

   matC = malloc(linhaC * sizeof(int*));
   matC[0] = malloc(linhaC * colunaC * sizeof(int*));

   for(int i = 1; i < linhaC; i++)
      matC[i] = matC[i - 1] + colunaC;

   multiplicaM(matA, matB, matC,linhaA,colunaA,colunaB);

   printf("\nMatriz A:\n");
   imprimeM(matA,linhaA,colunaA);

   printf("\nMatriz B:\n");
   imprimeM(matB,linhaB,colunaB);

   printf("\nMatriz A * B:\n");
   imprimeM(matC,linhaC,colunaC);

   free(matA[0]);
   free(matA);
   free(matB[0]);
   free(matB);
   free(matC[0]);
   free(matC);
}