/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 30/05/2026
Objetivo    : Calcular a série de fibonacci contando quantas chamadas recursivas foram feitas.
Aprendizado : Funções recursivas e contagem da quantidade de chamadas recursivas.
-------------------------------------------------------------------------- */
#include <stdio.h>

int contador;

int fib(int x){
    contador++;
    if(x == 0){
        return 0;
    }
    if(x == 1){
        return 1;
    }
    return fib(x-1) + fib(x-2);
}
int main(){
    int n, x, i, resultado;
    scanf("%d", &n);
    for(i=0; i < n; i++){
        scanf("%d", &x);
        contador = 0;
        resultado = fib(x);
        printf("fib(%d) = %d calls = %d\n", x,contador -1, resultado);
    }
    return 0;
}
