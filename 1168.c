/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 20/05/2026
Objetivo    : determinar n° de LEDs com base no número
Aprendizado : comando switch e string
*/

#include <stdio.h>

int main()
{
    int N, i, j, nled;
    scanf("%d", &N);
    getchar();
    char num[1001];
    for(i=0; i<N; i++){
        fgets(num, sizeof(num), stdin);
        nled = 0;
        for(j=0; num[j]!='\0' && num[j] != '\n'; j++){
            switch(num[j]){
                case '1':
                    nled = nled + 2;
                    break;
                case '7':
                   nled = nled + 3;
                   break;
                case '4':
                   nled = nled + 4;
                   break;
                case '2':
                case '3':
                case '5':
                    nled = nled + 5;
                    break;
                case '0':
                case '6':
                case '9':
                    nled = nled + 6;
                    break;
                case '8':
                    nled = nled + 7;
                    break;
            }
        }
        printf("%d leds\n", nled);  
    }
    return 0;
}
