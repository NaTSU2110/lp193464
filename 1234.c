/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 27/04/2026
Objetivo    : Transforme a sentença de entrada em uma sentença 
dançante trocando as letras para minúscula ou maiúscula. Todos
os espaços da sentença original deverão ser preservados.
Aprendizado : utilizar melhor a função if, a tabela ascii, 
utilizar string, e conversão para maiúsculas e minúsculas
*/
#include <stdio.h>
#include <ctype.h>

int main(){
    char dance[50];
    int i, letra=1;
    fgets (dance,50,stdin);
        for (i=0;i<50;i++){
            if (65<=dance[i] && dance[i]<=90 || 97<=dance[i] && dance[i]<=122){
                if (letra%2!=0){
                dance[i]=toupper(dance[i]);
                letra++;
                }
                else{
                dance[i]=tolower(dance[i]);
                letra++;
                }
            }
            else{
                dance[i]=dance[i];
            }
        }
    printf("%s\n",dance);
    return 0;
}
