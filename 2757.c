/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2757
Data        : 14/04/2026
Objetivo    : Entrada e saída de números inteiros
Aprendizado : máscaras
*/

#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d", &A);
    scanf("%d",&B);
    scanf("%d",&C);
    printf("A = %d, B = %d, C = %d\n",A,B,C);
    printf("A = %10d, B = %10d, C = %10d\n",A,B,C);
    printf("A = %010d, B = %010d, C = %010d\n",A,B,C);
    printf("A = %-10d, B = %-10d, C = %-10d\n",A,B,C);

    return 0;
}
