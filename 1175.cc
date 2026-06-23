/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 23/06/2026
Objetivo    : espelhar os vetores (trocar o primeiro com o último, o segundo com o penúltimo...)
Aprendizado : relembrar a necessidade de um auxiliar para fazer a troca
-------------------------------------------------------------------------- */
#include <iostream>

using namespace std;

int main() {
    int N[20];

    for (int i = 0; i < 20; i++) {
        cin >> N[i];
    }

    for (int i = 0; i < 10; i++) {
        int aux = N[i];
        N[i] = N[19 - i];
        N[19 - i] = aux;
    }

    for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << N[i] << '\n';
    }

    return 0;
}
