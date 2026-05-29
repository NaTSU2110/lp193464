/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 12/05/2026
Objetivo    : matriz quadrada, diagonal principal=1 e diagonal secundária=2, tamanho é lido, 3 preenche as outras posições
Aprendizado : Aprender a trabalhar com ponteiros.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
   int matriz[70][70];
   int N, i=0, j=0;
   while(scanf("%d", &N)!= EOF){
       for(i=0 ;i<N; i++){
           int *p=matriz[i];
           for(j=0; j<N; j++){
               if(i+j==N-1){
                   *(p+j)=2;
               }
               else if(i==j){
                   *(p+j)=1;
               }
               else{
                   *(p+j)=3;
               }
               printf("%d", *(p+j));
           }
           printf("\n");
       }
   }
    return 0;
}
