#include <stdio.h>

int MDC(int F1, int F2){
    if(F2 == 0){
        return F1;
    }
    return MDC(F2, F1%F2);
}

int main(){
    int N, F1, F2, i;
    scanf("%d", &N);
    for(i=0; i<N; i++){
         scanf("%d%d", &F1,&F2);
        printf("%d\n", MDC(F1, F2));
    }
    return 0;
}
