/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 23/06/2026
Objetivo    : Imprimir o tabuleiro com base na existência de pães de queijo com base nas regras do jogo
Aprendizado : vizinhança em matrizes
-------------------------------------------------------------------------- */
#include <iostream>

using namespace std;

int main() {
    int m[100][100];
    int N, M;

    while (cin >> N >> M) {

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> m[i][j];
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {

                if (m[i][j] == 1) {
                    cout << 9;
                } else {
                    int contagem = 0;
                    if (i > 0 && m[i - 1][j] == 1)
                        contagem++;
                    if (i + 1 < N && m[i + 1][j] == 1)
                        contagem++;
                    if (j > 0 && m[i][j - 1] == 1)
                        contagem++;
                    if (j + 1 < M && m[i][j + 1] == 1)
                        contagem++;

                    cout << contagem;
                }
            }
            cout << '\n';
        }
    }
    return 0;
}
