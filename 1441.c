/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 22/06/2026
Objetivo    : Achar o maior número das sequências de granizo
Aprendizado : trabalhar com recursão.
-------------------------------------------------------------------------- */
#include <stdio.h>

int maior = 1, n;
int granizo(int H){
    if (H==1){
        return maior;
    }
    if (H>maior){
        maior = H;
    }
    if (H%2==0){
        n = H/2;
    }
    else{
        n = 3*H + 1;
    }
    return granizo(n);
}

int main(){
    int H;
    while(scanf("%d", &H) && H != 0){
        maior = 1;
        maior = granizo(H);
        printf("%d\n", maior);
    }
    return 0;
}
