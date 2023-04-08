#include <stdio.h>

int main(){
   int i=3,j=5;
   int *p, *q;
   p = &i;
   q = &j;

/*
   p == &i: Quando se estabelece uma igualdade entre o ponteiro p e o endereço de i, dado que já foi estabelecido
   que o ponteiro p aponta para o endereço de i a expressão p == &i retorna o valor 1 (verdadeiro).

   *p - *q: Dado que p aponta para o endereço de i, logo se tem que o valor de *p é igual ao valor de i, da mesma 
   forma o valor de *q será igual ao valor de j. Portanto, teremos que (*p - *q) = (3 - 5) = -2.

   **&p: A primeira ação que é realizada nessa expressão é a obtenção do endereço de p com operador &, após isso
   é obtido o valor que está no endereço apontado por &p. Dessa forma, como &p aponta diretamente para o endereço
   de i onde está o valor de 3 o retorno também irá ser o valor de 3.

   (3 - *p/(*q) + 7): Dado que p aponta para o endereço de i, logo se tem que o valor de *p é igual ao valor de i, 
   da mesma forma o valor de *q será igual ao valor de j. Portanto, teremos que
   (3 - *p/(*q) + 7) = (3 - 3/5 + 7) = 10, é importante salientar que 3/5 = 0 dado que estamos nos referindo 
   a inteiros ou seja, isso implica em (3 - 0 + 7) = 10.

   Segue abaixo os valores retornados por cada expressão:
*/

   printf("%d\n", p == &i);
   printf("%d\n", *p - *q);
   printf("%d\n", **&p);
   printf("%d", 3 - *p/(*q) + 7);



   return 0;
}
