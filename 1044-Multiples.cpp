#include<stdio.h>

int main(){
    int A, B, x;
    scanf("%d %d",&A, &B);

    if (A > B){
        x = A % B;

        if (x == 0){
            printf("Sao Multiplos\n");
        }
        else {
            printf("Nao sao Multiplos\n");
        }
    }
    else if (A < B){
        x = B % A;
        if (x == 0){
            printf("Sao Multiplos\n");
        }
        else {
            printf("Nao sao Multiplos\n");
        }
    }
    return 0;
}
