#include <stdio.h>

int calcularDuracao(int inicio, int fim){
    int tempo = fim - inicio;
    return tempo;
}

int main() {
    int inicio, fim;
    scanf("%d%d", &inicio, &fim);
    inr dur = calcularDuracao(inicio, fim);
    printf("O JOGO DUROU %d HORA(S)", dur);
    return 0;
}
