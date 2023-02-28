#include<stdio.h>

int main(){
    float A;
    scanf("%f",&A);

    if ( 0 <= A && 25 >= A){
        printf("Intervalo [0,25]\n");
    }
    else if ( 25 <= A && 50 >= A){
            printf("Intervalo (25,50]\n");
    }
    else if ( 50 <= A && 75 >= A){
            printf("Intervalo (50,75]\n");
    }
    else if ( 75 <= A && 1000 >= A){
            printf("Intervalo (75,100]\n");
    }
    else if ( 100 < A || 0 > A){
            printf("Fora de intervalo\n");
    }

    return 0;
}
