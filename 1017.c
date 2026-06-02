/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 19/05/2026
Objetivo    : calcular litros de combustível a partir de dada velocidade e tempo
Aprendizado : usar função
*/

#include <stdio.h>

float calcularLitros(int tempo, int velocidade){
    float distancia = velocidade*tempo;
    float litros = distancia/12;
    return litros;
}
    
int main() {
    int tempo, velocidade;
    scanf("%d%d", &tempo, &velocidade);
    float qlitros = calcularLitros(tempo, velocidade);
    printf("%.3f\n", qlitros);
    
    return 0;
}
