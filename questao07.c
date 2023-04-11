#include <stdio.h>

int main(void){
   int mat[4], *p, x;

   p = mat + 1;  // VÁLIDA!
   p = mat++;    // INVÁLIDA!
   p = ++mat;    // INVÁLIDA!
   x = (*mat)++; // VÁLIDA!  
}