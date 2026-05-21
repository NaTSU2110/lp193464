/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 07/05/2026
Objetivo    : matriz diagonal principal=1 e diagonal secundária=2, tamanho é lido, 3 preenche as outras posições
Aprendizado : entender melhor a programação de uma matriz.
*/
#include<stdio.h>
int main(){
    int i,j,k,n,matriz[72][72];
    while(scanf("%d",&n)!=EOF){
        k=n-1;;
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                if(i==j)matriz[i][j]=1;
                else matriz[i][j]=3;
                if(j==k)matriz[i][j]=2;
            }
            k--;
        }
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                printf("%d",matriz[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
