/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 22/06/2026
Objetivo    : determinar menor m, conservando o 13 como última região
Aprendizado : c++, adaptar função de josephus.
-------------------------------------------------------------------------- */
#include <iostream>

int ultima(int N, int m) { //com base na região anterior calcula a útima a ser desligada
    int regiao = 0;
    for (int i = 1; i < N; i++) { //o loop acontecerá até todas as regiões serem desligadas
        regiao = (regiao + m) % i;
    }
    return regiao + 1;
}

int main() {
    int N;
    while (std::cin >> N && N != 0) { //entrada para o número de regiões
        int m = 1;
        while (corte(N, m) != 12) { //acha o menor m que determina a última região como a 13
            m++;
        }
        std::cout << m << '\n';
    }
    return 0;
}
