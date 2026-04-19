/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 19/04/2026
Objetivo    : Soma de Impares Consecutivos 
Aprendizado : utilizar o if e for
*/
#include <stdio.h>
 
int main() {
    int x,y,z,s;
    z=0;
    s=0;
    scanf("%d%d", &x, &y);
    if (x<y){
        z=y;
        y=x;
        x=z;
    }
    for(z=y;z<x;z++){
        if (z%2!=0 && z!=y) {
            s+=z;
        }
    }
    printf("%d\n",s);
    return 0;
}
