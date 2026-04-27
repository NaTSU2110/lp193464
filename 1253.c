/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 27/04/2026
Objetivo    : Para cada caso de teste de entrada (a entrada deve 
conter número de casas, a string e o deslocamento), imprima uma 
linha de saída com o texto decodificado
Aprendizado : tabela ascii e explorar melhor a string
*/
#include <stdio.h>

int main(){
    char codigo[50];
    int casos, deslocamento, i=1, j=0;
    scanf ("%d",&casos);
    while (i<=casos){
        scanf ("%s",codigo);
        scanf ("%d",&deslocamento);
        while (codigo[j]!='\0'){
            codigo[j]=codigo[j]-deslocamento;
            if (codigo[j]<65){
                codigo[j]=codigo[j] + 26;
            }
            j++;
        }
        j=0;
        printf("%s\n",codigo);
        i++;
    }
    return 0;
}
