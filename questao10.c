#include <stdio.h>

int main(){
   char x[4] = {"1234"};
   int y[4] = {1, 2, 3, 4};
   float z[4] = {1.0, 2.0, 3.0, 4.0};
   double k[4] = {1.0, 2.0, 3.0, 4.0};
   
   printf("AVALIANDO char x[4]: ");
   for (int i=1; i<4; i++){
      printf("x+%d = %p  ", i, x+i);
   }

   printf("\nAVALIANDO int y[4]: ");
   for (int i=1; i<4; i++){
      printf("y+%d = %p  ", i, y+i);
   }

   printf("\nAVALIANDO float z[4]: ");
   for (int i=1; i<4; i++){
      printf("z+%d = %p  ", i, z+i);
   }
   
   printf("\nAVALIANDO double k[4]: ");
   for (int i=1; i<4; i++){
      printf("k+%d = %p  ", i, k+i);
   }
}