#include <stdio.h>

/* 
   O resultado obtido na execução do código abaixo foi: 61ff1c 7 5 15 9. Para entedermos o que houve precisamos ter
   como premissa que o %x é responsável por imprimir um conteúdo de uma determinada variável com representação 
   hexadecimal e que o %d faz o contrário, ou seja imprime o conteúdo com uma representação decimal.

   Dessa forma, 

   p: temos que (p) recebe o endereço da variável (i) que por sua vez foi impresso em uma representação 
   hexadecimal;

   *p+2: Dado que (*p) retorna o valor da variável para qual (p) estava apontando temos que (*p = 5), portando, isso
   implica que (*p+2) é igual a 7 que é representado de maneira decimal;

   **&p: para um melhor entendimento dessa expressão ela deve ser olhada por partes, da seguinte forma:
      --> (&p) ao se avaliar essa sentença é possível perceber que ela retornará o endereço do ponteiro (p), pois (p)
      retorna o endereço de (i), mas caso esteja junto ao (&) ele irá retornar o enderço dele mesmo.

      --> (*&p) quanto a essa sentença ela irá retornar o valor do endereço da variável (i), dessarte, é possível afirmar
      que (*&p) é igual ao valor de (p).

      --> (**&p) usando a analogia de que (*p) retorna o valor da variável (i) e sabendo que (*&p) é igual ao valor de (p),
      portanto, temos que a essa senteça irá, também, retornar o valor da variável (i) que é 5.

   3**p: Essa expressão é bem interessante porque em outras linguagens os dois asteriscos representam o operador de
   exponenciação, mas como isso não acontece em C, podemos interpretar da seguinte forma: sabendo que (*p) representa
   o valor de (i) e que ao seu lado temos (3*) que basicamente descre 3 vezes alguma coisa é bastante simples definir
   que (3**p) será 15, dado que (*p) = i = 5;

   **p+4: Pode ser simplesmente interpretado conforme as analogias feitas acima e dessa forma, chegar a conclusão
   de que esta expressão retorna 9.
*/

int main(){
   int i=5, *p;
   p = &i;
   printf("%x %d %d %d %d", p, *p+2, **&p, 3**p, **&p+4);

   return 0;
}