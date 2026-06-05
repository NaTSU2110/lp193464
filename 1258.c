/*
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Natália Tenório Silva Uemura
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 25/05/2026
Objetivo    : lista para produção de camisetas
Aprendizado : struct
*/
#include <stdio.h>
#include <string.h>

typedef struct camiseta{
    char nome[50];
    char cor[9];
    char tamanho;
}xy;

int main (){
    int N = 0, i, j;
    int primeiro_caso = 1;
    struct camiseta temp;
    while (scanf("%d", &N) == 1 && N != 0) {
        getchar();
      
        if (!primeiro_caso) {
            printf("\n");
        }
        primeiro_caso = 0;
   
        struct camiseta v[60];
        for(i=0; i<N; i++){
            fgets(v[i].nome, sizeof(v[i].nome), stdin);
            v[i].nome[strcspn(v[i].nome, "\n")] = '\0';
            scanf("%s", v[i].cor);
            getchar();
            scanf("%c", &v[i].tamanho);
            getchar();
        }
        for (i = 0; i < N - 1; i++) {
            for (j = 0; j < N - i - 1; j++) {
                if (strcmp(v[j].nome, v[j+1].nome) > 0) {
                    temp = v[j];
                    v[j] = v[j+1];
                    v[j+1] = temp;
                }
            }
        }
        for (i=0; i<N; i++){
             if(strcmp(v[i].cor, "branco")==0 && v[i].tamanho == 'P' ){
                printf("%s %c %s\n", v[i].cor, v[i].tamanho, v[i].nome);
            }
        }
        for (i=0; i<N; i++){
            if(strcmp(v[i].cor, "branco")==0 && v[i].tamanho == 'M' ){
                printf("%s %c %s\n", v[i].cor, v[i].tamanho, v[i].nome);
            }
        }
        for (i=0; i<N; i++){
            if(strcmp(v[i].cor, "branco")==0 && v[i].tamanho == 'G' ){
                printf("%s %c %s\n", v[i].cor, v[i].tamanho, v[i].nome);
            }
        }
        for (i=0; i<N; i++){
            if(strcmp(v[i].cor, "branco")!=0 && v[i].tamanho == 'P' ){
                printf("%s %c %s\n", v[i].cor, v[i].tamanho, v[i].nome);
            }
        }
        for (i=0; i<N; i++){
            if(strcmp(v[i].cor, "branco")!=0 && v[i].tamanho == 'M' ){
                printf("%s %c %s\n", v[i].cor, v[i].tamanho, v[i].nome);
            }
        }
        for (i=0; i<N; i++){
            if(strcmp(v[i].cor, "branco")!=0 && v[i].tamanho == 'G' ){
                printf("%s %c %s\n", v[i].cor, v[i].tamanho, v[i].nome);
            }
        }
        
    }    
        
    return 0;
}
