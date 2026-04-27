
#include <stdio.h>

int main(){
    char codigo[50];
    int casos, deslocamento, i=1, j=0;
    scanf ("%d",&casos);
    while (i<=casos){
        scanf ("%s",codigo);
        scanf ("%d",&deslocamento);
        while (codigo[j]!='\0'){
            codigo[j]=codigo[j]-deslocamento;
            if (codigo[j]<65){
                codigo[j]=codigo[j] + 26;
            }
            j++;
        }
        j=0;
        printf("%s\n",codigo);
        i++;
    }
    return 0;
}
