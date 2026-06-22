/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 22/06/2026
Objetivo    : indicar o sobrevivente
Aprendizado : Funções recursivas e c++.
-------------------------------------------------------------------------- */

#include <iostream> //incluir biblioteca (cin e cout)

int josephus(int n, int k) { //função recursiva que resolve o problema. n é o número de pessoas. k é o tamanho do salto.
    if (n == 1) 
        return 0; //a numeração das pessoas começa no 0 termina no n-1.

    return (josephus(n - 1, k) + k) % n;
}

int main() {
    int C;
    std::cin >> C;

    for (int i = 1; i <= C; i++) {
        int n, k;
        std::cin >> n >> k;

        std::cout << "Case " << i << ": "
                  << josephus(n, k) + 1
                  << '\n';
    }

    return 0;
}
