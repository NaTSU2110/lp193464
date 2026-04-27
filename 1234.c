#include <stdio.h>
#include <ctype.h>

int main(){
    char dance[50];
    int i, letra=1;
    fgets (dance,50,stdin);
        for (i=0;i<50;i++){
            if (65<=dance[i] && dance[i]<=90 || 97<=dance[i] && dance[i]<=122){
                if (letra%2!=0){
                dance[i]=toupper(dance[i]);
                letra++;
                }
                else{
                dance[i]=tolower(dance[i]);
                letra++;
                }
            }
            else{
                dance[i]=dance[i];
            }
        }
    printf("%s\n",dance);
    return 0;
}
