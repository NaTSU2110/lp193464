/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 19/05/2026
Objetivo    : calcular duração do jogo a partir das horas de inicio e fim
Aprendizado : usar função
*/
#include <stdio.h>

int calcularDuracao(int inicio, int fim){
    int tempo;
    if (fim == inicio){
        tempo = 24;
    }
    else{
        if (fim > inicio){
            tempo = fim - inicio;
        }
        else{
            tempo = 24 - inicio + fim;
        }
    }
    return tempo;
}

int main() {
    int inicio, fim;
    scanf("%d%d", &inicio, &fim);
    int dur = calcularDuracao(inicio, fim);
    printf("O JOGO DUROU %d HORA(S)\n", dur);
    return 0;
}
