/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 20/04/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Aprendizado : utilizar for 
*/
#include <stdio.h>
 
int main(){
    int numeros;
    int i,maior,posicao;
    maior=0;
    for(i=0;i<100;i++){
        scanf("%d", &numeros);
        if (maior<numeros){
            maior=numeros;
            posicao=i+1;
        }
    }
    printf("%d\n",maior);
    printf("%d\n",posicao);
    return 0;
}
