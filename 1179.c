#include <stdio.h>
 
int main() {
    int par[5], impar[5], entrada[15], i=0; k=0;
    while(i<15){
        scanf("%d", &entrada[i]);
        i++;
    }
    i=0;
    for(j=0,j<10,j++){
            if (entrada[j]%2=0 && i<5){
                entrada[j]=par[i];
                i++;
            }
            else{
                if(k<5)
                entrada[j]=impar[k];
                k++;
            }
    }
            

    return 0;
}
