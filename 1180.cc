/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 23/06/2026
Objetivo    : imprimir menor valor de um vetor e sua posição
Aprendizado : vetor em c++
-------------------------------------------------------------------------- */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> X(N);

    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    int menor = X[0];
    int pos = 0;

    for (int i = 0; i < N; i++) {
        if (X[i] < menor) {
            menor = X[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << menor << '\n';
    cout << "Posicao: " << pos << '\n';

    return 0;
}
