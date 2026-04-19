/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 08/04/2026
Objetivo    : Leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”
Aprendizado : utilizar a função scanf e variáveis
*/
#include <stdio.h>
 
int main() {
 int a,b,c,maiorab,maior;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 maiorab=(a+b+abs(a-b))/2;
 maior=(maiorab+c+abs(maiorab-c))/2;
 printf("%d eh o maior\n", maior);
    return 0;
}
