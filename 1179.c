
#include <stdio.h>
int main()
{
//introduzir variáveis
   int impar[5], par[5];
   int i, j, numero, contpar = 0, contimpar = 0;
//leitura dos números
   for(i=0;i<15;i++){
       scanf("%d", &numero);
//preenchendo vetor par
       if(numero%2==0){
           par[contpar]=numero;
           contpar++;
//esvaziamento do vetor        
           if(contpar==5){
               for(j=0;j<5;j++){
                   printf("par[%d] = %d\n", j, par[j]);
               }
//reinicia o contador e preenchimento
               contpar = 0;
           }
       }
//preenchendo vetor ímpar
       else{
           impar[contimpar]=numero;
           contimpar++;
//esvaziamento do vetor
           if(contimpar==5){
               for(j=0;j<5;j++){
                   printf("impar[%d] = %d\n", j, impar[j]);
               }
//reinicia contador e preenchimento
               contimpar = 0;
           }
       }
      
   }
 //imprime os números que sobraram começando pelos ímpares
   for(j=0; j<contimpar; j++){
       printf("impar[%d] = %d\n", j, impar[j]);
   }
   for(j=0; j<contpar; j++){
       printf("par[%d] = %d\n", j, par[j]);
   }
  
    return 0;
}
