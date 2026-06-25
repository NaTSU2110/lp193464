/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 04/05/2026
Objetivo    : mensagem codificada
Aprendizado : string
*/
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    int N, n;
    char finald, crip[1001];

    scanf("%d\n", &N);

    for(int i = 0; i < N; ++i){
        scanf("%[^\n]\n", &crip);
        n = strlen(crip);
        
        for(int j = 0; j < n; ++j){
            if (65<=crip[j] && crip[j]<=90 || 97<=crip[j] && crip[j]<=122){
                crip[j] += 3;
            }
        }
        for(int j = 0; j < n/2; ++j){
            finald = crip[j];
            crip[j] = crip[n - 1 - j];
            crip[n - 1 - j] = finald;
        }
        for(int j = n/2; j < n; ++j){
            crip[j]-=1;
        }
        printf("%s\n", crip);
    }

    return 0;
}
