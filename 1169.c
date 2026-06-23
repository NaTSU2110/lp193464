/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 22/06/2026
Objetivo    : calcular quantidade de quilos com base na quantidade de casas (soma dos dobros)
Aprendizado : trabalhar com recursão e unsigned long long.
nota: imprecisão por causa do uso da função pow.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

unsigned long long qgraos(int c){
    if(c == 0)
        return 0;

    return (1ULL << (c - 1)) + qgraos(c - 1);
}
int main() {
    int i, n, c;
    unsigned long long quilos;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&c);
        quilos = qgraos(c)/12000;
        printf("%llu kg\n", quilos);
    }
    return 0;
}
