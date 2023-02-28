#include<stdio.h>
#include<stdlib.h>

int main(){
    double scr1, scr2, avg;
    int X;

    while(1){
        while (1){
        scanf("%lf", &scr1);
            if(scr1>=0 && scr1<=10){
            break;
            }
            else{
                printf("nota invalida\n");
            }
        }
        while (1){
        scanf("%lf", &scr2);
            if(scr2>=0 && scr2<=10){
            break;
            }
        else{
            printf("nota invalida\n");
        }
        }
    avg = (scr1+scr2)/2;
    printf("media = %.2lf\n", avg);
    printf("novo calculo (1-sim 2-nao)\n");
        while(scanf("%d",&X)){
            if (X==2 || X==1){
                    break;
            }
            else{
            printf("novo calculo (1-sim 2-nao)\n");
            }
        }
    if(X==2){
        break;
    }
    if(X==1){
        continue;
    }
    }
    return 0;
}
