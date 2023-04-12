#include <stdio.h>

int main(void){
   float aloha[10], coisas[10][5], *pf, value = 2.2;
   int i=3;

   aloha[2] = value;        // VÁLIDO 
   scanf("%f", &aloha);     // VÁLIDO, PORÉM QUANDO FOR IMPRESSO DA SEGUINTE FORMA printf("%f", &aloha);
                            // NÃO IRÁ RETORNAR O VALOR ESPERADO E SIM UM VALOR DESCONHECIDO E NÃO REAL (LIXO).
                            
   aloha = value;           // INVÁLIDO
   printf("%f", aloha);     // VÁLIDO, MAS O VALOR QUE FOR IMPRESSO SERÁ DESCONHECIDO E NÃO REAL (LIXO).
   coisas[4][4] = aloha[3]; // VÁLIDO
   coisas[5] = aloha;       // INVÁLIDO
   pf = value;              // INVÁLIDO
   pf = aloha;              // VÁLIDO

   return 0;
}