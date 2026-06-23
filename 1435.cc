/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 23/06/2026
Objetivo    : imprimir uma matriz quadrada que cresce ao centro.
Aprendizado : distâncias das bordas de uma matriz definem número, formatação.
-------------------------------------------------------------------------- */
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int N;

    while (cin >> N && N != 0) {
        vector<vector<int>> m(N, vector<int>(N));

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int distbord = i; //distância da borda superior

                if (distbord > j) //distância da borda a esquerda
                    distbord = j;

                if (distbord > (N - 1) - i) //distância da borda inferior
                    distbord = (N - 1) - i;

                if (distbord > (N - 1) - j) //distância da borda a direita
                    distbord = (N - 1) - j;

                m[i][j] = distbord + 1; //o preechimento se dá com a distância da borda mais próxima +1
            }
        }
      
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j == 0)
                    cout << setw(3) << m[i][j];
                else
                    cout << " " << setw(3) << m[i][j];
            }
            cout << '\n';
        } //imprime a matriz

        cout << '\n'; //pula a linha para a próxima entrada
    }

    return 0;
}
