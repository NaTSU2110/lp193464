
#include <stdio.h>

int main()
{
    int N, i=0, j=0, nled=0;
    scanf("%d", &N);
    getchar();
    for(i=0; i<N; i++){
        char v[1001];
        fgets(v, sizeof(v), stdin);
        nled = 0;
        for(j=0; v[j]!='\0' && v[j] != '\n'; j++){
            switch(v[j]){
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
