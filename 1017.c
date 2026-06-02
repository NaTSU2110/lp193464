
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
