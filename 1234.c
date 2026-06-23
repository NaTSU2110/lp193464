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

int main() {
    char dance[50];
    while (fgets(dance, sizeof(dance), stdin)) {
        int i, letra = 1;
        for (i = 0; dance[i] != '\0'; i++) {
            if (isalpha(dance[i])) {
                if (letra % 2 != 0)
                    dance[i] = toupper(dance[i]);
                else
                    dance[i] = tolower(dance[i]);

                letra++;
            }
        }
        printf("%s", dance);
    }
    return 0;
}
