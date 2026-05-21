#include<stdio.h>
int main(){
    int i,j,k,n,matriz[72][72];
    while(scanf("%d",&n)!=EOF){
        k=n-1;;
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                if(i==j)matriz[i][j]=1;
                else matriz[i][j]=3;
                if(j==k)matriz[i][j]=2;
            }
            k--;
        }
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                printf("%d",matriz[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
