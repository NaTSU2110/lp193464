/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : tabuada
Aprendizado : ...
*/

#include <stdio.h>
 
int main() {
    int n,i,a;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        a=n*i;
        printf("%d x %d = %d\n",i,n,a);
    }
    return 0;
}
