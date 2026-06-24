/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Data        : 24/06/2026
Objetivo    : sudoku interativo
*/

#include <stdio.h>
int linha, coluna, palpite;
int sudoku[9][9];

void arquivosudoku(){
    FILE *arquivo = fopen("input2.txt", "r");

    if(arquivo == NULL){
        printf("ERRO\n");
    }

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            fscanf(arquivo,"%d", &sudoku[i][j]);
        }
    }

    fclose(arquivo);
}

void jogada(){
    for (int i = 0; i < 9; i++) {
        if (i % 3 == 0 && i != 0)
            printf("------+-------+------\n");

        for (int j = 0; j < 9; j++) {
            if (j % 3 == 0 && j != 0)
                printf("| ");

            printf("%d ", sudoku[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Digite a linha do 0 que deseja substituir:");
    scanf("%d", &linha);
    linha--;
    printf("Digite a coluna do 0 que deseja substituir:");
    scanf("%d", &coluna);
    coluna--;
    printf("Digite seu palpite:");
    scanf("%d", &palpite);
}

void teste1palpite(){
        while(linha < 0 || linha > 8 || coluna < 0 || coluna > 8 || sudoku[linha][coluna] != 0 || palpite < 1 || palpite > 9){
            printf("\nA jogada extrapola as regras do jogo. Tente novamente.\n");
            jogada();
        }
}

int temZero(int sudoku[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (sudoku[i][j] == 0) {
                return 1; // encontrou um zero
            }
        }
    }
    return 0; // não encontrou zeros
}

void jogando(){
    while(temZero(sudoku)){
        jogada();
        teste1palpite();
        sudoku[linha][coluna] = palpite;
    }

}

int valida_linhas(int sudoku[9][9]){
    for(int i = 0; i<9; i++){
        int frequencia[10]={0};
        for(int j = 0; j < 9; j++){
            int numero = sudoku[i][j];
            if(frequencia[numero]==1){
                return 0;
            }
            else{
                frequencia[numero] = 1;
            }
        }
    }
    return 1;
}

int valida_colunas(int sudoku[9][9]){
    for(int j = 0; j < 9; j++){
        int frequencia[10]={0};
        for(int i = 0; i < 9; i++){
            int numero = sudoku[i][j];
            if(frequencia[numero]==1){
                return 0;
            }
            else{
                frequencia[numero] = 1;
            }
        }
    }
    return 1;
}

int valida_blocos(int sudoku[9][9]){
    for(int coluna_bloco = 0; coluna_bloco < 9; coluna_bloco += 3){
        for(int linha_bloco = 0; linha_bloco < 9; linha_bloco += 3){
            int frequencia[10]={0};
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    int numero = sudoku[linha_bloco + i][coluna_bloco + j];

                    if(frequencia[numero] == 1){
                        return 0;
                    }
                    else{
                        frequencia[numero] = 1;
                    }
                }
            }
        }
    }
    return 1;
}

int main(){

    int fimdejogo = 1;

    while(fimdejogo){
        arquivosudoku();
    
        printf("Bem vindo ao jogo Sudoku.\nSubstituia o 0 por 1 a 9 evitando repetir o que tem na linha, na coluna ou no bloco.\n\n");
    
        jogando();

        int validando_linha = valida_linhas(sudoku);
        int validando_coluna = valida_colunas(sudoku);
        int validando_bloco = valida_blocos(sudoku);
    
        if(validando_linha == 1 && validando_coluna == 1 && validando_bloco == 1){
            printf("\nSUCESSO!!! CONSEGUIU COMPLETAR CORRETAMENTE\n");
            fimdejogo = 0;
        }
        else{
            printf("\nInfelizmente errou algum palpite... gostaria de tentar novamente?\nSe SIM digite 1\nSe NAO digite 0\n");
            scanf("%d", &fimdejogo);
        }
        printf("\n");
    }
    return 0;
}
