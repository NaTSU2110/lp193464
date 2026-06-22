/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 22/06/2026
Objetivo    : indicar o sobrevivente
Aprendizado : Funções recursivas e c++.
-------------------------------------------------------------------------- */
#include <iostream>

using namespace std;

int josephus(int n, int k) {
    if (n == 1)
        return 0;

    return (josephus(n - 1, k) + k) % n;
}

int main() {
    int NC;
    cin >> NC;

    for (int i = 1; i <= NC; i++) {
        int n, k;
        cin >> n >> k;

        cout << "Case " << i << ": " << josephus(n, k) + 1 << '\n';
    }

    return 0;
}
