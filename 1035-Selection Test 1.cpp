#include <stdio.h>
#include <math.h>

int main(){
    int A, B, C, D, sumAB, sumCD;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    sumAB = A + B;
    sumCD = C + D;
    if (B>C && D>A && sumCD>sumAB && C>0 && D>0 && A%2 == 0){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }

}
